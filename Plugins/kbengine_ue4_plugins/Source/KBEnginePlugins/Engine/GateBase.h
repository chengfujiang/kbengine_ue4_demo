/*
	Generated by KBEngine!
	Please do not modify this file!
	Please inherit this module, such as: (class Gate : public GateBase)
	tools = kbcmd
*/

#pragma once
#include "KBECommon.h"
#include "Entity.h"
#include "KBETypes.h"
#include "ServerErrorDescrs.h"
#include "EntityCallGateBase.h"

class Method;
class Property;
class MemoryStream;

// defined in */scripts/entity_defs/Gate.def
class KBENGINEPLUGINS_API GateBase : public Entity
{
public:
	EntityBaseEntityCall_GateBase* pBaseEntityCall;
	EntityCellEntityCall_GateBase* pCellEntityCall;

	uint32 entityNO;
	virtual void onEntityNOChanged(uint32 oldValue) {}
	uint32 modelID;
	virtual void onModelIDChanged(uint32 oldValue) {}
	uint8 modelScale;
	virtual void onModelScaleChanged(uint8 oldValue) {}
	FString name;
	virtual void onNameChanged(const FString& oldValue) {}
	uint32 uid;
	virtual void onUidChanged(uint32 oldValue) {}
	uint32 utype;
	virtual void onUtypeChanged(uint32 oldValue) {}


	void onGetBase() override;
	void onGetCell() override;
	void onLoseCell() override;

	EntityCall* getBaseEntityCall() override;
	EntityCall* getCellEntityCall() override;

	void onRemoteMethodCall(Method* pMethod, MemoryStream& stream) override;
	void onUpdatePropertys(Property* pProp, MemoryStream& stream) override;
	void callPropertysSetMethods() override;

	GateBase();
	virtual ~GateBase();

};
