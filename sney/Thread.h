#pragma once

#include <noncopyable.h>
#include <Condition.h>
#include <Mutex.h>

#include <thread>

namespace sney
{
    class EventLoop;

    class Thread : private noncopyable
    {
        public:

            Thread();
            ~Thread();

            bool start();
            void stop();

            void join();

            void run();

        private:

            std::shared_ptr<EventLoop> _loop;
            std::shared_ptr<std::thread> _thread;
            std::string _name;

            Mutex _mutex;
            Condition _cond;
    };
}
