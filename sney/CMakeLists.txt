set(net_srcs
    EpollEvent.cpp
    EventLoop.cpp
    Thread.cpp
    ThreadPool.cpp)

add_library(sney_net ${net_srcs})
include_directories(${sney_SOURCE_DIR}
                    ${sney_SOURCE_DIR}/sney)
