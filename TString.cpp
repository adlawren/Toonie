#include "TString.hpp"

using namespace std;

TString::TString(const string &s)
   : string_(s)
{
}

TString::TString(const char *s)
   : string_(s)
{
}

TString::~TString()
{
}

const char* TString::c_str() const
{
   return string_.c_str();
}

vector<TString> TString::split(const char delimiter) const
{
   vector<TString> res;

   // ensure the string has atleast one character
   if (string_.empty())
      return res;

   size_t pos;
   pos = string_.find(delimiter);
   if (pos != string::npos)
   {
      // found the delimiter
      res.push_back(TString(string_.substr(0, pos)));

      vector<TString> to_add = TString(string_.substr(pos + 1, string_.size())).split(delimiter);
      res.insert(res.end(), to_add.begin(), to_add.end());
   }
   else
   {
      res.push_back(string_);
   }

   return res;
}