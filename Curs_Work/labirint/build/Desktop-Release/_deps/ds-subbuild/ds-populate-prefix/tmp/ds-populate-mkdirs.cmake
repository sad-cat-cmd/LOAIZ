# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-src"
  "/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build"
  "/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-subbuild/ds-populate-prefix"
  "/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-subbuild/ds-populate-prefix/tmp"
  "/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp"
  "/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-subbuild/ds-populate-prefix/src"
  "/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-subbuild/ds-populate-prefix/src/ds-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
