#include "utilities/log.hpp"

#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

namespace fs = std::filesystem;

constexpr const char* LOG_FILENAME = "launcher.log";

void WriteToConsole( const std::string& msg )
{
    std::cout << msg;
}

void WriteToLog( const std::string& msg )
{
    fs::path objLogPath = fs::current_path() / LOG_FILENAME;

    std::ofstream os( objLogPath.c_str(), std::ios::app );

    if ( os.is_open() == true )
    {
        os.write( msg.data(), msg.length() );
    }

    os.close();
}

void Log::PrintDebug( const char* format, fmt::format_args args )
{
    std::string msg = "Dbg: " + fmt::vformat( format, args );
    WriteToConsole( msg );
    WriteToLog( msg );
}

void Log::PrintInfo( const char* format, fmt::format_args args )
{
    std::string msg = "Info: " + fmt::vformat( format, args );
    WriteToConsole( msg );
    WriteToLog( msg );
}

void Log::PrintWarning( const char* format, fmt::format_args args )
{
    std::string msg = "Warn: " + fmt::vformat( format, args );
    WriteToConsole( msg );
    WriteToLog( msg );
}

void Log::PrintError( const char* format, fmt::format_args args )
{
    std::string msg = "Err: " + fmt::vformat( format, args );
    WriteToConsole( msg );
    WriteToLog( msg );
}