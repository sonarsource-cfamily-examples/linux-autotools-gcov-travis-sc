# -fprofile-abs-path is important to enable gcov and SonarCloud to uniquely identify the
AM_CXXFLAGS = -fprofile-abs-path --coverage -O0 -I$(top_srcdir)/src @AM_CXXFLAGS@
bin_PROGRAMS = coverage_test1
coverage_test1_SOURCES = test.cpp
coverage_test1_LDADD = $(top_builddir)/src/mylib/libmylib.a $(LDFLAGS)
