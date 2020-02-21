// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"\n                                                                 \n"
  " _______ _________ _______  _______  _______ _________ _         \n"
  "(  ____ \\__   __/(  ____ \(  ____ \(  ___  )\__   __/( (    /|  \n"
  "| (    \/   ) (   | (    \/| (    \/| (   ) |   ) (   |  \  ( |  \n"
  "| (__       | |   | (_____ | |      | |   | |   | |   |   \ | |  \n"
  "|  __)      | |   (_____  )| |      | |   | |   | |   | (\ \) |  \n"
  "| (         | |         ) || |      | |   | |   | |   | | \   |  \n"
  "| )         | |   /\____) || (____/\| (___) |___) (___| )  \  |  \n"
  "|/          )_(   \_______)(_______/(_______)\_______/|/    )_)  \n";
const std::string nonWindowsAsciiArt =
"\n                                                                 \n"
  " _______ _________ _______  _______  _______ _________ _         \n"
  "(  ____ \\__   __/(  ____ \(  ____ \(  ___  )\__   __/( (    /|  \n"
  "| (    \/   ) (   | (    \/| (    \/| (   ) |   ) (   |  \  ( |  \n"
  "| (__       | |   | (_____ | |      | |   | |   | |   |   \ | |  \n"
  "|  __)      | |   (_____  )| |      | |   | |   | |   | (\ \) |  \n"
  "| (         | |         ) || |      | |   | |   | |   | | \   |  \n"
  "| )         | |   /\____) || (____/\| (___) |___) (___| )  \  |  \n"
  "|/          )_(   \_______)(_______/(_______)\_______/|/    )_)  \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
