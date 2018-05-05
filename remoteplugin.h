/*  dssi-vst: a DSSI plugin wrapper for VST effects and instruments
    Copyright 2004-2007 Chris Cannam
*/


#ifndef REMOTE_PLUGIN_H
#define REMOTE_PLUGIN_H

#define FIXED_SHM_SIZE  (16 * 65536 * sizeof(float))
#define FIXED_SHM_SIZE2 (1024 * 128)
#define FIXED_SHM_SIZE3 (1024 * 128)

#define VSTSIZE 2048

const float RemotePluginVersion = 0.986;

enum RemotePluginDebugLevel
{
    RemotePluginDebugNone,
    RemotePluginDebugSetup,
    RemotePluginDebugEvents,
    RemotePluginDebugData
};

enum RemotePluginOpcode
{
    RemotePluginGetVersion = 0,
    RemotePluginUniqueID,
    RemotePluginGetName,
    RemotePluginGetMaker,
    RemotePluginGetFlags,
    RemotePluginGetinitialDelay,
    RemotePluginProcessEvents,
    RemotePluginGetChunk,
    RemotePluginSetChunk,
    RemotePluginCanBeAutomated,
    RemotePluginGetProgram,
    RemotePluginEffectOpen,
    // RemotePluginGetUniqueID,
    // RemotePluginGetInitialDelay,

    RemotePluginSetBufferSize = 100,
    RemotePluginSetSampleRate,
    RemotePluginReset,
    RemotePluginTerminate,

    RemotePluginGetInputCount = 200,
    RemotePluginGetOutputCount,

    RemotePluginGetParameterCount = 300,
    RemotePluginGetParameterName,
#ifdef WAVES
    RemotePluginGetShellName,
#endif
    RemotePluginSetParameter,
    RemotePluginGetParameter,
    RemotePluginGetParameterDefault,
    RemotePluginGetParameters,

    RemotePluginGetProgramCount = 350,
    RemotePluginGetProgramNameIndexed,
    RemotePluginGetProgramName,
    RemotePluginSetCurrentProgram,

    RemotePluginProcess = 500,
    RemotePluginProcessDouble,
    RemotePluginIsReady,

    RemotePluginSetDebugLevel = 600,
    RemotePluginWarn,

    RemotePluginShowGUI = 700,
    RemotePluginHideGUI,

#ifdef EMBED
    RemotePluginOpenGUI,
#endif

    RemotePluginGetEffInt = 800,
    RemotePluginGetEffString,
    RemotePluginDoVoid,
    RemotePluginDoVoid2,
    RemotePluginEffCanDo,
    RemoteInProp,
    RemoteOutProp,
    RemoteMidiKey,
    RemoteMidiProgName,
    RemoteMidiCurProg,
    RemoteMidiProgCat,
    RemoteMidiProgCh,
    RemoteSetSpeaker,
    RemoteGetSpeaker,

    RemotePluginNoOpcode = 9999
};

#endif
