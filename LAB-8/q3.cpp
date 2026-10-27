#include <iostream>
using namespace std;

class Compressor {
public:
    virtual void compress(double fileSize) = 0;
};

class TextCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        double compressedSize = fileSize * 0.40;

        cout << "\nText File:" << endl;
        cout << "Original File Size: " << fileSize << " MB" << endl;
        cout << "Compressed File Size: " << compressedSize << " MB" << endl;
    }
};

class ImageCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        double compressedSize = fileSize * 0.70;

        cout << "\nImage File:" << endl;
        cout << "Original File Size: " << fileSize << " MB" << endl;
        cout << "Compressed File Size: " << compressedSize << " MB" << endl;
    }
};

int main() {
    TextCompressor t;
    ImageCompressor i;

    double textSize, imageSize;

    cout << "Enter text file size (in MB): ";
    cin >> textSize;

    cout << "Enter image file size (in MB): ";
    cin >> imageSize;

    t.compress(textSize);
    i.compress(imageSize);

    return 0;
}