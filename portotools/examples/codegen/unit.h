
/*
 * Generated by Porto Mon Jun 23 2014 15:20:20 GMT+0200 (CEST)
 */

#ifndef UNIT_H_DEF
#define UNIT_H_DEF

#include "ientity.h"
#include <string>

class Unit : public IEntity
{
public:
  Unit();
  Unit(Unit const &other);
  virtual ~Unit;

  static std::string _version() const;
  static std::string _name() const;

protected:
   virtual bool store(StorageObject &storageObject);
   virtual bool restore(StorageObject const &storageObject);

};

class UnitStore
{
public:
   static bool set(Unit const *e, StorageObject &obj);
   static bool get(Unit *e, StorageObject const &obj);
};

#endif
