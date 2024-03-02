#include <iostream>

class MegaString {
    int string_length;
    char *chars;
public:
    MegaString(std::string str) {
        this->string_length = str.length();
        this->chars = {new char[string_length]{}};
        for (int i = 0; i < this->string_length; i++) {
            this->chars[i] = str[i];
        }
    }

    // Деструктор
    ~MegaString() {
        delete[] chars;
    }

    // Копирование
    MegaString(MegaString &other) {
        this->string_length = other.string_length;
        this->chars = {new char[string_length]{}};
        for (int i = 0; i < other.string_length; i++) {
            this->chars[i] = other.chars[i];
        }
        delete[] other.chars;
    }

    // Длина строки
    int length() const {
        return this->string_length;
    }

    // получить строку
    std::string get() {
        std::string out;
        for (int i = 0; i < this->string_length; i++) {
            out += this->chars[i];
        }
        return out;
    }

    // получить символ
    char get_char(int index) {
        return this->chars[index];
    }

    // Сложение
    MegaString operator+(MegaString &other) {
        return MegaString(this->get() + other.get());
    }


    MegaString& operator=(const MegaString &other) {
        delete[] chars;
    string_length = other.string_length;
        this->chars = {new char[string_length]{}};

        for (int i = 0; i <= this->string_length; i++) {
            this->chars[i] = other.chars[i];
        }
        return *this;
    }
};


int main() {
    MegaString a = MegaString("1234");
    MegaString b = MegaString("56789");
    MegaString c = MegaString("");
    std::cout << "a length = " << a.length() << "; b length = " << b.length() << std::endl;
    std::cout << "a = " << a.get() << "; b = " << b.get() << "; c = " << c.get() << std::endl;
    c = a + b;
    a = b;
    std::cout << "a = " << a.get() << "; b = " << b.get() << "; c = " << c.get() << std::endl;
    c = a + b;
    std::cout << "a = " << a.get() << "; b = " << b.get() << "; c = " << c.get() << std::endl;

}