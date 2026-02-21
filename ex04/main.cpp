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

    static void WriteAllText(const string& filename, const string& content) {
        std::ofstream out(filename.c_str());
        if (!out) {
            throw std::runtime_error("Cannot open file: " + filename);
        }
        out << content;
    }
};

// C#-style string replace helper
string Replace(const string& str, const string& oldStr, const string& newStr) {
    string result;
    size_t pos = 0;
    size_t found;
    while ((found = str.find(oldStr, pos)) != string::npos) {
        result += str.substr(pos, found - pos);
        result += newStr;
        pos = found + oldStr.length();
    }
    result += str.substr(pos);
    return result;
}

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
        string result = Replace(content, s1, s2);
        string outname = filename + ".replace";
        File::WriteAllText(outname, result);
        WriteLine("Replacement done. Output in " + outname);
    } catch (const std::exception& e) {
        WriteLine("Error: " + string(e.what()));
        return 1;
    }

    return 0;
}