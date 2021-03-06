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

#ifndef SYLLABLE_H
#define SYLLABLE_H

#include <string>
#include <vector>

struct syllable
{
public:
	syllable(float start, float end, std::string identity);
	float start;
	float end;
	std::string identity;
	std::vector<std::vector<float> > pitch_values;
	std::string contour_start;
	std::string contour_direction;
	std::string contour_extreme;
};

#endif
