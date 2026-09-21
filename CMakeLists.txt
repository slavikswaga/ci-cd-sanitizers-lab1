cmake_minimum_required(VERSION 3.10.0)
project(ci-cd-sanitizers-lab1 VERSION 0.1.0 LANGUAGES CXX)

add_executable(ci-cd-sanitizers-lab1 main.cpp)

install(TARGETS ci-cd-sanitizers-lab1 RUNTIME DESTINATION bin)

set(CPACK_PACKAGE_NAME "ci-cd-sanitizers-lab1")
set(CPACK_PACKAGE_VERSION "0.1.0")
set(CPACK_PACKAGE_CONTACT "vvk160@tpu.ru")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "vvk160@tpu.ru")
set(CPACK_GENERATOR "DEB")

if(DEFINED ENV{GITHUB_RUN_NUMBER})
  set(CPACK_PACKAGE_FILE_NAME "ci-cd-sanitizers-lab1-0.1.0.$ENV{GITHUB_RUN_NUMBER}-Linux")
else()
  set(CPACK_PACKAGE_FILE_NAME "ci-cd-sanitizers-lab1-0.1.0-Linux")
endif()

include(CPack)
