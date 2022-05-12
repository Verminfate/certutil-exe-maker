#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int lines = 0;
    string text;
    string name;
    cout << "Name of exe to convert or path including .exe\n>";
    cin >> name;
    string cmd = "certutil -encode " + name + " output.txt";
    system(cmd.c_str());
    ofstream source_file("source.cpp");
    source_file << "#include <iostream>"<<endl;
    source_file << "#include <fstream>" << endl;
    source_file << "using namespace std;" << endl;
    source_file << "int main()" << endl;
    source_file << "{" << endl;
    source_file << "    ofstream output(\"cvrt.txt\");" << endl;
    ifstream txtfile("output.txt");
    while (!txtfile.eof())
    {
        getline(txtfile, text);
        source_file << "    output <<\"" + text + "\"<<endl;" << endl;
    }
    source_file << "    output.close();" << endl;
    source_file << "    system(\"certutil -decode cvrt.txt output.exe\");" << endl;
    source_file << "    system(\"output.exe\");" << endl;
    source_file << "}";
    source_file.close();
    txtfile.close();
    system("del output.txt");
    system("pause");
}

