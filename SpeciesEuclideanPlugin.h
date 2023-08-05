#ifndef SPECIESEUCLIDEANPLUGIN_H
#define SPECIESEUCLIDEANPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class SpeciesEuclideanPlugin : public Plugin
{
public: 
 std::string toString() {return "SpeciesEuclidean";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
