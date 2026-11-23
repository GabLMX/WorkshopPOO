#include <iostream>

using namespace std;

//typedef int ArrayElement;
//->
template<typename T> //Au lieu de manipuler un type donné, on créer un template.
string array_element_to_string(T *el) {
    return to_string(*el);
}

template<>
string array_element_to_string(string *el){
    return *el;
}

template<typename T>
class DynamicArray {
private:
    int count;
    int size;

    T **els;

    const float REFIT_THRESHOLD = 0.8;
    const float RESIZE_THRESHOLD = 0.8;

private:
    void resize(int size) {
        try {
        T **temp;

        this->size = size;
        temp = new T *[size];
        for (int i = 0; i < count; i++) {
            temp[i] = els[i];
        }

        delete[] els;
        els = temp;
        } catch (std::bad_alloc e) {
        size = size / 2;
        }
    }
    void fit() { resize(count); }

public:
    DynamicArray(int size = 1) {
        count = 0;
        els = new T *[size];
    }

    int add(T *el) {
        if (count >= RESIZE_THRESHOLD * size) {
        resize(size * 2);
        }

        els[count] = el;

        return count++;
    }

    T *remove(int i) {
        T *ptr = nullptr;

        if(0 <= i < count) {
        ptr = els[i];
        els[i] = els[--count];

        if (count < REFIT_THRESHOLD * size) {
            fit();
        }
        }

        return ptr;
    }

    T *get(int i) { return els[i]; }

    void print() {
        cout << "[";
        if(count > 0) {
        for(int i = 0; i < count - 1; i++) {
            cout << array_element_to_string(els[i]) << ", ";
        }
        cout << array_element_to_string(els[count - 1]);
        }
        cout << "]";
    }
};


int main() {
    //DynamicArray arr;
    //->
    DynamicArray<int> arr;
    //On doit préciser le type de donnée manipulées maintenant qu'on utilise le template T;
    //le <int> devient le type de données de T, plutôt que "template".

    int a = 2, b = 3, c = 5;
    arr.add(&a);
    arr.add(&b);
    arr.add(&c);
    arr.remove(1);
    arr.print();

    DynamicArray<string> array;
    string henlo = "Hello";
    array.add(&henlo);
    array.print();

    return 0;
}
