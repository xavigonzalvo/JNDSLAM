/* Copyright 2015 Rasmus Dall - rasmus@dall.dk

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

#ifndef JNDSLAM_STD_H
#define JNDSLAM_STD_H

#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include <iostream>

// Split a string based on a delimiter.
std::vector<std::string> split_string(std::string str, char delim, bool empty=false);

// Slice a vector of vector<string>.
// Ignores out-of-range requests with an error.
std::vector<std::vector<float> > slice_vector(std::vector<std::vector<float> > &vec, int start, int end);

#endif
