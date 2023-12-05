cmake_minimum_required(VERSION 3.26)
project(Code C)

set(CMAKE_C_STANDARD 11)

add_executable(Code
        LoggenGlobal.h

        loggen.c
        loggen.h

        Struct/LoggenStructSettings.h
        LoggenSettings/LoggenSettings.c
        LoggenSettings/LoggenSettings.h
        LoggenSettings/LoggenSettingsPub.h

        Struct/LoggenStructHelp.h
        LoggenHelp/LoggenHelp.c
        LoggenHelp/LoggenHelp.h
        LoggenHelp/LoggenHelpPub.h

        Struct/LoggenStructCommand.h
        LoggenCommand/LoggenCommand.c
        LoggenCommand/LoggenCommand.h
        LoggenCommand/LoggenCommandPub.h
)