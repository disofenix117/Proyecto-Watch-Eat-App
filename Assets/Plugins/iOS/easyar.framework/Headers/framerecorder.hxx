﻿//=============================================================================================================================
//
// EasyAR Sense 4.2.0.8700-7bcbc8b1c
// Copyright (c) 2015-2021 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
// EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
// and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//=============================================================================================================================

#ifndef __EASYAR_FRAMERECORDER_HXX__
#define __EASYAR_FRAMERECORDER_HXX__

#include "easyar/types.hxx"

namespace easyar {

/// <summary>
/// Input frame recorder.
/// There is an input frame input port and an input frame output port. It can be used to record input frames into an EIF file. Refer to `Overview &lt;Overview.html&gt;`__ .
/// All members of this class is thread-safe.
/// </summary>
class InputFrameRecorder
{
protected:
    easyar_InputFrameRecorder * cdata_ ;
    void init_cdata(easyar_InputFrameRecorder * cdata);
    virtual InputFrameRecorder & operator=(const InputFrameRecorder & data) { return *this; } //deleted
public:
    InputFrameRecorder(easyar_InputFrameRecorder * cdata);
    virtual ~InputFrameRecorder();

    InputFrameRecorder(const InputFrameRecorder & data);
    const easyar_InputFrameRecorder * get_cdata() const;
    easyar_InputFrameRecorder * get_cdata();

    /// <summary>
    /// Input port.
    /// </summary>
    void input(/* OUT */ InputFrameSink * * Return);
    /// <summary>
    /// Camera buffers occupied in this component.
    /// </summary>
    int bufferRequirement();
    /// <summary>
    /// Output port.
    /// </summary>
    void output(/* OUT */ InputFrameSource * * Return);
    /// <summary>
    /// Creates an instance.
    /// </summary>
    static void create(/* OUT */ InputFrameRecorder * * Return);
    /// <summary>
    /// Starts frame recording. initialScreenRotation is the initial screen rotation when recording data, and it will be used in rendering for playback. The definition of screen rotation is the same as in `CameraParameters`_ .
    /// </summary>
    bool start(String * filePath, int initialScreenRotation);
    /// <summary>
    /// Stops frame recording. It will only stop recording and will not affect connection.
    /// </summary>
    void stop();
};

/// <summary>
/// Input frame player.
/// There is an input frame output port. It can be used to get input frame from an EIF file. Refer to `Overview &lt;Overview.html&gt;`__ .
/// All members of this class is thread-safe.
/// </summary>
class InputFramePlayer
{
protected:
    easyar_InputFramePlayer * cdata_ ;
    void init_cdata(easyar_InputFramePlayer * cdata);
    virtual InputFramePlayer & operator=(const InputFramePlayer & data) { return *this; } //deleted
public:
    InputFramePlayer(easyar_InputFramePlayer * cdata);
    virtual ~InputFramePlayer();

    InputFramePlayer(const InputFramePlayer & data);
    const easyar_InputFramePlayer * get_cdata() const;
    easyar_InputFramePlayer * get_cdata();

    /// <summary>
    /// Output port.
    /// </summary>
    void output(/* OUT */ InputFrameSource * * Return);
    /// <summary>
    /// Creates an instance.
    /// </summary>
    static void create(/* OUT */ InputFramePlayer * * Return);
    /// <summary>
    /// Starts frame play.
    /// </summary>
    bool start(String * filePath);
    /// <summary>
    /// Stops frame play.
    /// </summary>
    void stop();
    /// <summary>
    /// Pauses frame play.
    /// </summary>
    void pause();
    /// <summary>
    /// Resumes frame play.
    /// </summary>
    bool resume();
    /// <summary>
    /// Total expected playback time span. The unit is second.
    /// </summary>
    double totalTime();
    /// <summary>
    /// Current playback time point. The unit is second. The initial value is 0.
    /// </summary>
    double currentTime();
    /// <summary>
    /// The initial screen rotation when recording data.
    /// </summary>
    int initalScreenRotation();
    /// <summary>
    /// Whether the playback is completed.
    /// </summary>
    bool isCompleted();
};

}

#endif

#ifndef __IMPLEMENTATION_EASYAR_FRAMERECORDER_HXX__
#define __IMPLEMENTATION_EASYAR_FRAMERECORDER_HXX__

#include "easyar/framerecorder.h"
#include "easyar/dataflow.hxx"
#include "easyar/frame.hxx"
#include "easyar/image.hxx"
#include "easyar/buffer.hxx"
#include "easyar/cameraparameters.hxx"
#include "easyar/vector.hxx"
#include "easyar/matrix.hxx"

namespace easyar {

inline InputFrameRecorder::InputFrameRecorder(easyar_InputFrameRecorder * cdata)
    :
    cdata_(NULL)
{
    init_cdata(cdata);
}
inline InputFrameRecorder::~InputFrameRecorder()
{
    if (cdata_) {
        easyar_InputFrameRecorder__dtor(cdata_);
        cdata_ = NULL;
    }
}

inline InputFrameRecorder::InputFrameRecorder(const InputFrameRecorder & data)
    :
    cdata_(NULL)
{
    easyar_InputFrameRecorder * cdata = NULL;
    easyar_InputFrameRecorder__retain(data.cdata_, &cdata);
    init_cdata(cdata);
}
inline const easyar_InputFrameRecorder * InputFrameRecorder::get_cdata() const
{
    return cdata_;
}
inline easyar_InputFrameRecorder * InputFrameRecorder::get_cdata()
{
    return cdata_;
}
inline void InputFrameRecorder::init_cdata(easyar_InputFrameRecorder * cdata)
{
    cdata_ = cdata;
}
inline void InputFrameRecorder::input(/* OUT */ InputFrameSink * * Return)
{
    if (cdata_ == NULL) {
        *Return = NULL;
        return;
    }
    easyar_InputFrameSink * _return_value_ = NULL;
    easyar_InputFrameRecorder_input(cdata_, &_return_value_);
    *Return = new InputFrameSink(_return_value_);
}
inline int InputFrameRecorder::bufferRequirement()
{
    if (cdata_ == NULL) {
        return int();
    }
    int _return_value_ = easyar_InputFrameRecorder_bufferRequirement(cdata_);
    return _return_value_;
}
inline void InputFrameRecorder::output(/* OUT */ InputFrameSource * * Return)
{
    if (cdata_ == NULL) {
        *Return = NULL;
        return;
    }
    easyar_InputFrameSource * _return_value_ = NULL;
    easyar_InputFrameRecorder_output(cdata_, &_return_value_);
    *Return = new InputFrameSource(_return_value_);
}
inline void InputFrameRecorder::create(/* OUT */ InputFrameRecorder * * Return)
{
    easyar_InputFrameRecorder * _return_value_ = NULL;
    easyar_InputFrameRecorder_create(&_return_value_);
    *Return = new InputFrameRecorder(_return_value_);
}
inline bool InputFrameRecorder::start(String * arg0, int arg1)
{
    if (cdata_ == NULL) {
        return bool();
    }
    bool _return_value_ = easyar_InputFrameRecorder_start(cdata_, arg0->get_cdata(), arg1);
    return _return_value_;
}
inline void InputFrameRecorder::stop()
{
    if (cdata_ == NULL) {
        return;
    }
    easyar_InputFrameRecorder_stop(cdata_);
}

inline InputFramePlayer::InputFramePlayer(easyar_InputFramePlayer * cdata)
    :
    cdata_(NULL)
{
    init_cdata(cdata);
}
inline InputFramePlayer::~InputFramePlayer()
{
    if (cdata_) {
        easyar_InputFramePlayer__dtor(cdata_);
        cdata_ = NULL;
    }
}

inline InputFramePlayer::InputFramePlayer(const InputFramePlayer & data)
    :
    cdata_(NULL)
{
    easyar_InputFramePlayer * cdata = NULL;
    easyar_InputFramePlayer__retain(data.cdata_, &cdata);
    init_cdata(cdata);
}
inline const easyar_InputFramePlayer * InputFramePlayer::get_cdata() const
{
    return cdata_;
}
inline easyar_InputFramePlayer * InputFramePlayer::get_cdata()
{
    return cdata_;
}
inline void InputFramePlayer::init_cdata(easyar_InputFramePlayer * cdata)
{
    cdata_ = cdata;
}
inline void InputFramePlayer::output(/* OUT */ InputFrameSource * * Return)
{
    if (cdata_ == NULL) {
        *Return = NULL;
        return;
    }
    easyar_InputFrameSource * _return_value_ = NULL;
    easyar_InputFramePlayer_output(cdata_, &_return_value_);
    *Return = new InputFrameSource(_return_value_);
}
inline void InputFramePlayer::create(/* OUT */ InputFramePlayer * * Return)
{
    easyar_InputFramePlayer * _return_value_ = NULL;
    easyar_InputFramePlayer_create(&_return_value_);
    *Return = new InputFramePlayer(_return_value_);
}
inline bool InputFramePlayer::start(String * arg0)
{
    if (cdata_ == NULL) {
        return bool();
    }
    bool _return_value_ = easyar_InputFramePlayer_start(cdata_, arg0->get_cdata());
    return _return_value_;
}
inline void InputFramePlayer::stop()
{
    if (cdata_ == NULL) {
        return;
    }
    easyar_InputFramePlayer_stop(cdata_);
}
inline void InputFramePlayer::pause()
{
    if (cdata_ == NULL) {
        return;
    }
    easyar_InputFramePlayer_pause(cdata_);
}
inline bool InputFramePlayer::resume()
{
    if (cdata_ == NULL) {
        return bool();
    }
    bool _return_value_ = easyar_InputFramePlayer_resume(cdata_);
    return _return_value_;
}
inline double InputFramePlayer::totalTime()
{
    if (cdata_ == NULL) {
        return double();
    }
    double _return_value_ = easyar_InputFramePlayer_totalTime(cdata_);
    return _return_value_;
}
inline double InputFramePlayer::currentTime()
{
    if (cdata_ == NULL) {
        return double();
    }
    double _return_value_ = easyar_InputFramePlayer_currentTime(cdata_);
    return _return_value_;
}
inline int InputFramePlayer::initalScreenRotation()
{
    if (cdata_ == NULL) {
        return int();
    }
    int _return_value_ = easyar_InputFramePlayer_initalScreenRotation(cdata_);
    return _return_value_;
}
inline bool InputFramePlayer::isCompleted()
{
    if (cdata_ == NULL) {
        return bool();
    }
    bool _return_value_ = easyar_InputFramePlayer_isCompleted(cdata_);
    return _return_value_;
}

}

#endif
