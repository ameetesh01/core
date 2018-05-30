/**************************************************************************************
Copyright 2015 Applied Research Associates, Inc.
Licensed under the Apache License, Version 2.0 (the "License"); you may not use
this file except in compliance with the License. You may obtain a copy of the License
at:
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software distributed under
the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied. See the License for the
specific language governing permissions and limitations under the License.
**************************************************************************************/

#pragma once
#include <biogears/cdm/properties/SEScalar.h>
#include <biogears/schema/ScalarEnergyPerAmountData.hxx>

class BIOGEARS_API EnergyPerAmountUnit : public CCompoundUnit
{
public:
  EnergyPerAmountUnit(const std::string& u) : CCompoundUnit(u) {}
  virtual ~EnergyPerAmountUnit() {}

  static bool IsValidUnit(const std::string& unit);
  static const EnergyPerAmountUnit& GetCompoundUnit(const std::string& unit);

  static const EnergyPerAmountUnit kcal_Per_mol;
  static const EnergyPerAmountUnit kJ_Per_mol;
};

class BIOGEARS_API SEScalarEnergyPerAmount : public SEScalarQuantity<EnergyPerAmountUnit>
{
public:
  SEScalarEnergyPerAmount() {}
	virtual ~SEScalarEnergyPerAmount() {}

  CDM::ScalarEnergyPerAmountData* Unload() const;
};