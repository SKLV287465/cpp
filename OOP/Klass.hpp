
class Klass {
public:
    Klass() {
    }
    
    // copy constructor
    Klass(const Klass& k) {

    }

    // move constructor
    Klass(Klass&& k) {

    }

    // destructor
    ~Klass() {

    }
    
    // copy assignment
    Klass& operator=(const Klass other) {

    }

    // move assignment
    Klass& operator=(Klass&& other) {

    }
    
    friend bool operator==(const Klass& a, const Klass& b);

private:
};

bool operator==(const Klass& a, const Klass& b) {
     
}

