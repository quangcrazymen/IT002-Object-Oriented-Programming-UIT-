#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main()
{
    // string a = "Hello everyone";
    // char regex_name[]="[A-Za-z0-9]";
    // cout<<regex_match(a,regex(regex_name));
    if (regex_match("softwareTesting", regex("(soft)(.*)")))
        cout << "string:literal => matched\n";

    cout<<regex_match("softwareTesting", regex("(soft)(.*)"))<<endl;
    // const char mystr[] = "SoftwareTestingHelp";
    const char mystr[] = "software is good";
        
    string str("Nguyen Do Quang");
    // regex str_expr("(soft)(.*)");
    regex str_expr("(Nguyen)");


    if (regex_match(str, str_expr))
        cout << "string:object => matched\n";

    if (regex_match(str.begin(), str.end(), str_expr))
        cout << "string:range(begin-end)=> matched\n";

    cmatch cm;
    regex_match(mystr, cm, str_expr);

    smatch sm;
    regex_match(str, sm, str_expr);

    regex_match(str.cbegin(), str.cend(), sm, str_expr);
    cout << "String:range, size:" << sm.size() << " matches\n";

    regex_match(mystr, cm, str_expr, regex_constants::match_default);

    // regex_search(str,)
    cout << "the matches are: ";
    for (unsigned i = 0; i < sm.size(); ++i)
    {
        cout << "[" << sm[i] << "] ";
    }

    cout << endl;

    return 0;
}