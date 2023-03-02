#include <chrono>

class myTimer {
    public:
        myTimer() {
            reset();
        }
        
        int64_t count_ns() {
            auto now = std::chrono::system_clock::now();
            auto now_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(now.time_since_epoch()).count();
            return   (now_ns - last_ns_);
        }

        float count_ms() {
            auto now = std::chrono::system_clock::now();
            auto now_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(now.time_since_epoch()).count();
            return   (now_ns - last_ns_)/1000000.0;
        }

        void reset() {
            last_ =  std::chrono::system_clock::now(); 
            last_ns_ = std::chrono::duration_cast<std::chrono::nanoseconds>(last_.time_since_epoch()).count();
        }

    private:
       std::chrono::_V2::system_clock::time_point  last_;
       int64_t last_ns_;
};

