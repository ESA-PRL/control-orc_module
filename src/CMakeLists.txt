rock_library(orc_module
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(orc_module_bin Main.cpp
    DEPS orc_module)

