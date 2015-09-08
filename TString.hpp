#ifndef __TSTRING_H__
#define __TSTRING_H__

/*
   The TString class is a custom string class to allow for additional functionality not provided in the standard template library.
*/

#include <string>
#include <vector>
#include <ostream>

class TString
{
   std::string string_;

public:
   TString(const std::string &s);
   TString(const char *s);
   ~TString();

   const char* c_str() const;

   std::vector<TString> split(const char delimiter) const;
};

#endif //__TSTRING_H__