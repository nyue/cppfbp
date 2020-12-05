cmake_minimum_required(VERSION 3.12)

project(cppfbp)

find_package(Boost COMPONENTS thread REQUIRED)

set(Boost_link_targets
  Boost::headers
  Boost::thread
  )

add_subdirectory(CppFBPCore)
