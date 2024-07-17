# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appsmartpole_screen_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appsmartpole_screen_autogen.dir/ParseCache.txt"
  "appsmartpole_screen_autogen"
  )
endif()
