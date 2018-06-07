#TBB library
#include_directories(${TBB_ROOT_DIR}/include)
include_directories(${TBB_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIR}/tbb)

add_executable(test2 test.cpp)

# Local libraries
include_directories(${LandmarkDetector_SOURCE_DIR}/include)

include_directories(../../lib/local/LandmarkDetector/include)
include_directories(../../lib/local/FaceAnalyser/include)
include_directories(../../lib/local/FaceLandmarkImg/include)		

target_link_libraries(test2 LandmarkDetector)
target_link_libraries(test2 FaceAnalyser)
target_link_libraries(test2 dlib)
target_link_libraries(test2 FaceLandmarkImg)

target_link_libraries(test2 ${OpenCV_LIBS} ${Boost_LIBRARIES} ${TBB_LIBRARY})
