#include <iostream>
#include <fstream>

using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream;

int main()
{
    string filename;
    cout<<"enter file name(example.txt): ";
    std::cin>>filename;
    int number;

    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
             << filename << "'" << endl;
        return EXIT_FAILURE;
    }
    int max =0;
    int min =1000;
    int avg=0;
    int i=0;
    while (input_file >> number) {
        i++;
        avg+=number;
        if(max<number){
            max=number;
        }
        if(min>number){
            min=number;
        }
    }
    cout<<"minmum number: "<<min<<endl;
    cout<<"maximum number: "<<max<<endl;
    cout<<"average: "<<(avg/i)<<endl;
    cout << endl;
    input_file.close();

    return EXIT_SUCCESS;
}