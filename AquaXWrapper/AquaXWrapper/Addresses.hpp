#include <Windows.h>
#pragma once

#define x(x) (x - 0x400000 + (DWORD)GetModuleHandleA(0))
#define r_lua_tostring(rL,i)	r_lua_tolstring(rL, (i), NULL)
#define r_lua_pop(rL,n)		r_lua_settop(rL, -(n)-1)
#define r_lua_getglobal(rL,s)	r_lua_getfield(rL, LUA_GLOBALSINDEX, (s))
#define r_lua_newtable(rL) r_lua_createtable(rL, 0, 0)
#define x(x) (x - 0x400000 + (DWORD)GetModuleHandleA(0))

namespace Addresses
{
    DWORD scriptcontext_addr = (0x01FDAC14);

    DWORD error_addr = (0x0);
#define error_ccv __fastcall

    DWORD getfield_addr = (0x0);
#define getfield_ccv __fastcall

    DWORD pushboolean_addr = (0x0);
#define pushboolean_ccv __fastcall

    DWORD toboolean_addr = (0x0);
#define toboolean_ccv __fastcall

    DWORD pushvalue_addr = (0x0);
#define pushvalue_ccv __fastcall

    DWORD pushnumber_addr = (0x0);
#define pushnumber_ccv __fastcall

    DWORD pushstring_addr = (0x0);
#define pushstring_ccv __fastcall

    DWORD pcall_addr = (0x0);
#define pcall_ccv __fastcall

    DWORD tolstring_addr = (0x0);
#define tolstring_ccv __fastcall

    DWORD next_addr = (0x0);
#define next_ccv __fastcall

    DWORD tonumber_addr = (0x0);
#define tonumber_ccv __fastcall

    DWORD pushcclosure_addr = (0x0);
#define pushcclosure_ccv __fastcall

    DWORD createtable_addr = (0x0);
#define createtable_ccv __fastcall

    DWORD rawgeti_addr = (0x0);
#define rawgeti_ccv __fastcall

    DWORD newuserdata_addr = (0x0);
#define newuserdata_ccv __fastcall

    DWORD newthread_addr = (0x0);
#define newthread_ccv __fastcall

    DWORD rawseti_addr = (0x0);
#define rawseti_ccv __fastcall

    DWORD getmetatable_addr = (0x0);
#define getmetatable_ccv __fastcall

    DWORD setmetatable_addr = (0x0);
#define setmetatable_ccv __fastcall

    DWORD touserdata_addr = (0x0);
#define touserdata_ccv __fastcall

    DWORD settable_addr = (0x0);
#define settable_ccv __fastcall

    DWORD type_addr = (0x0);
#define type_ccv __fastcall

    DWORD L_ref_addr = (0x0);
#define L_ref_ccv __fastcall

    DWORD gettop_addr = (0x0);
#define gettop_ccv __fastcall

    DWORD settop_addr = (0x0);
#define settop_ccv __fastcall

    DWORD pushnil_addr = (0x0);
#define pushnil_ccv __fastcall

    DWORD pushlightuserdata_addr = (0x0);
#define pushlightuserdata_ccv __fastcall

    DWORD getnamecallmethod_addr = (0x0);
#define getnamecallmethod_ccv __fastcall 

    int IdentityNumber = 104; // To set the Identity Number.

    int Top = 20; // Top Address.

    int Base = 28; // Base Address.
}

typedef int(error_ccv* ee)(int e, const char* n, ...);
static ee w_luaL_error = (ee)x(Addresses::error_addr);

typedef void(getfield_ccv* rgetfield)(DWORD rL, int idx, const char* k);
rgetfield w_lua_getfield = (rgetfield)(x(Addresses::getfield_addr));

typedef int(pushboolean_ccv* rboolean)(unsigned int, int);
rboolean w_lua_pushboolean = (rboolean)((x(Addresses::pushboolean_addr)));

typedef char* (tolstring_ccv* rtolstring)(DWORD rL, int idx, size_t* size);
rtolstring w_lua_tolstring = (rtolstring)((x(Addresses::tolstring_addr)));

typedef bool(toboolean_ccv* toboolean)(DWORD rL, bool idx);
toboolean w_lua_toboolean = (toboolean)(x(Addresses::toboolean_addr));

typedef void(pushvalue_ccv* pushvalue)(DWORD rL, DWORD idx);
pushvalue w_lua_pushvalue = (pushvalue)((x(Addresses::pushvalue_addr)));

typedef double(pushnumber_ccv* pushnumber)(DWORD rL, double idx);
pushnumber w_lua_pushnumber = (pushnumber)((x(Addresses::pushnumber_addr)));

typedef void(pushstring_ccv* rpushstring)(DWORD rL, const char*);
rpushstring w_lua_pushstring = (rpushstring)((x(Addresses::pushstring_addr)));

typedef int(pcall_ccv* rLua_pcall)(DWORD lst, int nargs, int nresults, int errfunc);
rLua_pcall w_lua_pcall = (rLua_pcall)(x(Addresses::pcall_addr));

typedef DWORD(next_ccv* next2)(DWORD rL, int idx);
next2 w_lua_next = (next2)((x(Addresses::next_addr)));

typedef double(tonumber_ccv* rtonumber)(DWORD, int, int);
rtonumber w_lua_tonumber = (rtonumber)(x(Addresses::tonumber_addr));

typedef void(pushcclosure_ccv* rpushcclosure)(DWORD rL, int fn, int non, int a1, int xd);
rpushcclosure w_lua_pushcclosure = (rpushcclosure)((x(Addresses::pushcclosure_addr)));

typedef void(createtable_ccv* rcreatetable)(DWORD rL, int num, int fix);
rcreatetable w_lua_createtable = (rcreatetable)((x(Addresses::createtable_addr)));

typedef DWORD(newthread_ccv* rnewthread)(DWORD);
rnewthread w_lua_newthread = (rnewthread)(x(Addresses::newthread_addr));

typedef void* (newuserdata_ccv* rnewuserdata)(DWORD, size_t, int);
rnewuserdata w_lua_newuserdata = (rnewuserdata)((x(Addresses::newuserdata_addr)));

typedef void(rawgeti_ccv* rrawgeti)(DWORD, DWORD, DWORD);
rrawgeti w_lua_rawgeti = (rrawgeti)(x(Addresses::rawgeti_addr));

typedef void(rawseti_ccv* rrawgeti)(DWORD, DWORD, DWORD);
rrawgeti w_lua_rawseti = (rrawgeti)(x(Addresses::rawseti_addr));

typedef void* (getmetatable_ccv* rgetmetatable)(DWORD rL, int idx);
rgetmetatable w_lua_getmetatable = (rgetmetatable)((x(Addresses::getmetatable_addr)));

typedef int(setmetatable_ccv* rsetmetatable)(DWORD rL, int idx);
rsetmetatable w_lua_setmetatable = (rsetmetatable)((x(Addresses::setmetatable_addr)));

typedef int(touserdata_ccv* rtouserdata)(DWORD, int);
rtouserdata w_lua_touserdata = (rtouserdata)((x(Addresses::touserdata_addr)));

typedef DWORD(type_ccv* rtype)(DWORD, int);
rtype w_lua_type = (rtype)(x(Addresses::type_addr));

typedef void* (settable_ccv* rsettable)(DWORD rL, int);
rsettable w_lua_settable = (rsettable)((x(Addresses::settable_addr)));

typedef DWORD(L_ref_ccv* rref)(DWORD, DWORD);
rref w_luaL_ref = (rref)((x(Addresses::L_ref_addr)));

int w_lua_gettop(int rL)
{
    return *(DWORD*)(rL + Addresses::Top) - *(DWORD*)(rL + Addresses::Base) >> 4;
}

typedef void(settop_ccv* rsettop)(DWORD rL, int idx);
rsettop w_lua_settop = (rsettop)((x(Addresses::settop_addr)));

typedef void(pushnil_ccv* pushnil)(DWORD);
pushnil w_lua_pushnil = (pushnil)((x(Addresses::pushnil_addr)));

typedef void(pushlightuserdata_ccv* rpushlight)(DWORD, void*);
rpushlight w_lua_pushlightuserdata = (rpushlight)((x(Addresses::pushlightuserdata_addr)));

typedef void(getnamecallmethod_ccv* rgetnamecallmethod)(DWORD, void*);
rgetnamecallmethod w_lua_getnamecallmethod = (rgetnamecallmethod)((x(Addresses::getnamecallmethod_addr)));