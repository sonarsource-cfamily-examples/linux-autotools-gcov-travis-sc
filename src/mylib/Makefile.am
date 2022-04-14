# -fprofile-abs-path is important to enable gcov and SonarCloud to uniquely identify the
# source files.
AM_CXXFLAGS = -fprofile-abs-path --coverage -O0 -I$(top_srcdir)/src @AM_CXXFLAGS@
lib_LIBRARIES = libmylib.a
libmylib_adir = $(includedir)/mylib
libmylib_a_HEADERS = lib.h
libmylib_a_SOURCES = $(libmylib_a_HEADERS) lib.cpp

