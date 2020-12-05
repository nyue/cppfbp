include_directories(Headers)

add_library(CppFBCore
  IntComps/Network.cpp
  Services/CppFBP.cpp
  Services/CppSub.cpp
  Services/thxbnet.cpp
  Services/thxgatrs.cpp
  Services/thxscan.cpp
  Services/thz.cpp
  Services/thzclos.cpp
  Services/thzcrep.cpp
  Services/thzdfpt.cpp
  Services/thzdrop.cpp
  Services/thzelct.cpp
  Services/thzgsize.cpp
  Services/thzpop.cpp
  Services/thzpush.cpp
  Services/thzrecv.cpp
  Services/thzsend.cpp
  Services/thziclos.cpp
  )

target_link_libraries(CppFBCore
  ${Boost_link_targets}
  )
