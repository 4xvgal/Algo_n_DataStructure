#include<iostream>
#include<fstream>
#include<stdexcept>


// Unix의 /dev/urandom 파일을 이용하여 난수 생성

class realRandom_urandom{
    private:
        std::ifstream urandom;
    public:
        realRandom_urandom(){
            urandom.open("/dev/urandom", std::ios::in | std::ios::binary);
            if (!urandom) {
                throw std::runtime_error("Failed to open /dev/urandom");
            }
        }
        ~realRandom_urandom(){
            urandom.close();
        }
        // 난수를 생성하는 함수
        unsigned int getRand(){
            unsigned int randomValue = 0; // 난수를 저장할 변수
            urandom.read(reinterpret_cast<char*>(&randomValue), sizeof(randomValue)); // 난수 읽기
            if (!urandom) {
                throw std::runtime_error("Failed to read from /dev/urandom");
            }
            return randomValue;
        }

};