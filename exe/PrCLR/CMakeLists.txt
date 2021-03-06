

#

# Example CMakeLists.txt file to demonstrate how to make a designable Windows Forms project with CMake.

#

# Code modifications and example by John Farrier, john.farrier@helleboreconsulting.com

#

#add_executable(ProjectCLR MyForm.cpp)

#cmake_minimum_required(VERSION 2.8.10)



# Project Name

#project(PrCLR CXX)



#include(CheckFunctionExists)


#include(CheckCXXSourceCompiles)


#include(CheckIncludeFile)



# Note: The designable form is assumed to have a .h extension as is default in Visual Studio.

# Node: The designable form is assumed to have a .resx file with the same name and path (save extension) as is default in Visual Studio



set(TARGET_H

  MyForm.h

 

  )



set(TARGET_SRC

  MyForm.cpp


  )
  
  set(TARGET_RESX

  MyForm.resx

  )
  
  
set_source_files_properties(${TARGET_SRC} PROPERTIES COMPILE_FLAGS "/clr")

#SET (SYSLIBS "C:/Program Files (x86)/Reference Assemblies/Microsoft/Framework/.NETFramework/v4.5.2")
#SET (SYSLIBS "include/mscorlib.dll;include/System.dll;include/System.Data.dll;include/System.Drawing.dll;include/System.Windows.Forms.dll;include/System.Xml.dll")
#SET (PROJECT_NAME "E:/openface2/OpenFace-OpenFace_v0.2/exe/ProjectCLR")
#set(TARGET_LIBRARIES ${SYSLIBS})
MESSAGE("SYSLIBS: ${SYSLIBS}") 

add_executable(PrCLR ${TARGET_SRC} ${TARGET_H} ${TARGET_RESX})
MESSAGE("PROJECT_NAME: ${PROJECT_NAME}") 


# Note: The property VS_GLOBAL_KEYWORD must be set.

set_property(TARGET PrCLR PROPERTY VS_GLOBAL_KEYWORD "ManagedCProj")



# Note: The property VS_DOTNET_REFERENCES must be set.

set_property(TARGET PrCLR PROPERTY VS_DOTNET_REFERENCES "mscorlib" "System" "System.Data" "System.Drawing" "System.Windows.Forms" "System.Xml")

include_directories(${LandmarkDetector_SOURCE_DIR}/include)
#include_directories(${TBB_ROOT_DIR}/include)
include_directories(${TBB_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIR}/tbb)
include_directories(../../lib/local/LandmarkDetector/include)
include_directories(../../lib/local/FaceAnalyser/include)
include_directories(../../lib/local/FaceLandmarkImg/include)
target_link_libraries(PrCLR LandmarkDetector)
target_link_libraries(PrCLR FaceAnalyser)
target_link_libraries(PrCLR dlib)
target_link_libraries(PrCLR FaceLandmarkImg)
target_link_libraries(PrCLR ${OpenCV_LIBS} ${Boost_LIBRARIES} ${TBB_LIBRARY})

# Note: Modification of compiler flags is required for CLR compatibility now that we are using .resx files.

string(REPLACE "/EHsc" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

string(REPLACE "/RTC1" "" CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")

