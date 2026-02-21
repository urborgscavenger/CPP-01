#include <iostream>
#include <fstream>
#include <string>

typedef std::string string;
#define WriteLine(x) std::cout << x << std::endl

class File {
public:
    static string ReadAllText(const string& filename) {
        std::ifstream in(filename.c_str());
        if (!in) {
            throw std::runtime_error("Cannot open file: " + filename);
        }
        return string((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
    }
};

int main(int argc, char* argv[]) {
    if (argc != 4) {
        WriteLine("Usage: " + string(argv[0]) + " <filename> <s1> <s2>");
        return 1;
    }

    string filename = argv[1];
    string s1 = argv[2];
    string s2 = argv[3];

    try {
        string content = File::ReadAllText(filename);

        string result;
        size_t pos = 0;
        size_t found;
        while ((found = content.find(s1, pos)) != string::npos) {
            result += content.substr(pos, found - pos);
            result += s2;
            pos = found + s1.length();
        }
        result += content.substr(pos);

        string outname = filename + ".replace";
        std::ofstream out(outname.c_str());
        if (!out) {
            WriteLine("Error: cannot open output file " + outname);
            return 1;
        }
        out << result;
        out.close();

        WriteLine("Replacement done. Output in " + outname);
    } catch (const std::exception& e) {
        WriteLine("Error: " + string(e.what()));
        return 1;
    }

    return 0;
}