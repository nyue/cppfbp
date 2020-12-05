include_directories(../CppFBPCore/Headers)

if (BUILD_LUA)
  set(COMPONENTS_THLUA_SOURCE
	Components/ThLua.cpp )
endif()

add_library(CppFBPComponents
  ${COMPONENTS_THLUA_SOURCE}
  Components/SubIn.cpp
  Components/SubOut.cpp
  Components/ThConcatStr.cpp
  Components/ThCopy.cpp
  Components/ThCopyNL.cpp
  Components/ThDrop.cpp
  Components/ThFileRd.cpp
  Components/ThFileWt.cpp
  Components/ThGenIps.cpp
  Components/ThPsThru.cpp
  Components/ThReplStr.cpp
  Components/ThRevers.cpp
  Components/ThSort.cpp
  Helper_Code/dfs.cpp
  )

target_link_libraries(CppFBPComponents
  ${Boost_link_targets}
  )
