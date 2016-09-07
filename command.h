//command.cpp
//
//Command class for commune


#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>

class Command
{
   std::string command;
   std::vector<std::string> arguments;
   bool rush;
   bool ret;

   public:

   Command(std::vector<std::string> v);
   ~Command();
  void set_command( std::string command ){ this->command = command;}
  void set_arguments( std::vector<std::string> arguments ){ this->arguments = arguments;}
  void set_rush( bool rush ){ this->rush = rush;}
  void set_ret( bool ret ){ this->ret = ret;}
};

