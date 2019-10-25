#pragma once

class ICSO2GameRoom;

abstract_class ICSO2GameManager
{
public:
	virtual ~ICSO2GameManager() = default;
	virtual void Init() = 0;
	virtual void sub_10297270() = 0;
	virtual void sub_102975F0() = 0;
	virtual void sub_102972C0() = 0;
	virtual void sub_10297660() = 0;
	virtual void sub_102976E0() = 0;
	virtual void sub_10297690() = 0;
	virtual void sub_10297860() = 0;
	virtual void sub_10294B20() = 0;
	virtual void sub_10297930() = 0;
	virtual void sub_102979E0() = 0;
	virtual void sub_10297A10() = 0;
	virtual void sub_10297A60() = 0;
	virtual void sub_10297AC0() = 0;
	virtual void sub_10297B60() = 0;
	virtual void sub_10297BB0() = 0;
	virtual void sub_10297BF0() = 0;
	virtual void sub_10297C30() = 0;
	virtual void sub_102977B0() = 0;
	virtual void sub_10297C80() = 0;
	virtual void sub_10297D90() = 0;
	virtual void sub_10297DA0() = 0;
	virtual void sub_10297DF0() = 0;
	virtual void sub_10297E30() = 0;
	virtual void sub_10297E70() = 0;
	virtual void sub_10297FE0() = 0;
	virtual void sub_10298100() = 0;
	virtual void sub_10298150() = 0;
	virtual const char* GetGameMode(int iRoomId) = 0;
	virtual void sub_102982E0() = 0;
	virtual void sub_10298330() = 0;
	virtual void sub_1029C0E0() = 0;
	virtual void sub_10298380() = 0;
	virtual void sub_102983F0() = 0;
	virtual void sub_10298390() = 0;
	virtual void sub_102983C0() = 0;
	virtual void sub_102984C0() = 0;
	virtual void sub_10298500() = 0;
	virtual void sub_10298560() = 0;
	virtual void sub_102985C0() = 0;
	virtual void sub_10298600() = 0;
	virtual void sub_10298680() = 0;
	virtual void sub_102986C0() = 0;
	virtual void sub_1029C220() = 0;
	virtual void sub_1029C240() = 0;
	virtual void sub_1029C2C0() = 0;
	virtual void sub_10294B30() = 0;
	virtual void sub_10298AD0() = 0;
	virtual void sub_10298B10() = 0;
	virtual void sub_10294B40() = 0;
	virtual void sub_10294BC0() = 0;
	virtual void sub_10294BD0() = 0;
	virtual void sub_10294C70() = 0;
	virtual void sub_10294CF0() = 0;
	virtual void sub_10298A20() = 0;
	virtual void sub_10294D30() = 0;
	virtual void sub_10298AA0() = 0;
	virtual void sub_10294DD0() = 0;
	virtual void sub_10298BC0() = 0;
	virtual void sub_10294E60() = 0;
	virtual void sub_10297530() = 0;
	virtual void sub_10297560() = 0;
	virtual void sub_102975A0() = 0;
	virtual void sub_1029C300() = 0;
	virtual void sub_1029C370() = 0;
	virtual void sub_1029C380() = 0;
	virtual void sub_1029C390() = 0;
	virtual void sub_1029C430() = 0;
	virtual void sub_1029C4C0() = 0;
	virtual void sub_1029C550() = 0;
	virtual void sub_1029C600() = 0;
	virtual void sub_1029C620() = 0;
	virtual void sub_1029C630() = 0;
	virtual void sub_1029CA90() = 0;
	virtual void sub_1029C6B0() = 0;
	virtual void sub_1029CAE0() = 0;
	virtual void sub_1029CAF0() = 0;
	virtual void sub_1029CB00() = 0;
	virtual void sub_1029CB10() = 0;
	virtual void sub_1029CB40() = 0;
	virtual void sub_1029CB50() = 0;
	virtual void sub_1029CB60() = 0;
	virtual void sub_1029CB80() = 0;
	virtual void sub_1029CC50() = 0;
	virtual void sub_1029CC70() = 0;
	virtual void sub_1029CB20() = 0;
	virtual void sub_1029CB30() = 0;
	virtual void sub_10294F00() = 0;
	virtual void sub_1029CCA0() = 0;
	virtual void sub_1029CCF0() = 0;
	virtual void sub_1029CDD0() = 0;
	virtual void sub_10295640() = 0;
	virtual void sub_10295650() = 0;
	virtual void sub_1029CE90() = 0;
	virtual void sub_1029CFC0() = 0;
	virtual void sub_102991C0() = 0;
	virtual void sub_102995D0() = 0;
	virtual void sub_1029AF40() = 0;
	virtual void sub_1029AF50() = 0;
	virtual void sub_1029A770() = 0;
	virtual void sub_1029A8F0() = 0;
	virtual void sub_1029A9F0() = 0;
	virtual void sub_1029AAD0() = 0;
	virtual void sub_1029AC00() = 0;
	virtual void sub_1029AD70() = 0;
	virtual void sub_102972E0() = 0;
	virtual void sub_1029A5E0() = 0;
	virtual void sub_10299870() = 0;
	virtual void sub_10294FA0() = 0;
	virtual ICSO2GameRoom* GetCurrentRoom() = 0;
	virtual void sub_10299A60() = 0;
	virtual void sub_102950E0() = 0;
	virtual void sub_102950F0() = 0;
	virtual void sub_102951A0() = 0;
	virtual void sub_10068060() = 0;
	virtual void sub_10066DA0() = 0;
	virtual void sub_10066DA02() = 0;
	virtual void sub_10295250() = 0;
	virtual void sub_10299B10() = 0;
	virtual void sub_10299BC0() = 0;
	virtual void sub_10299BD0() = 0;
	virtual void sub_1029AB70() = 0;
	virtual void sub_1029ABB0() = 0;
	virtual void sub_1029ABE0() = 0;
	virtual void sub_10295300() = 0;
	virtual void sub_1029A220() = 0;
	virtual void sub_102953E0() = 0;
	virtual void sub_1029A230() = 0;
	virtual void sub_1029A250() = 0;
	virtual void sub_1029A270() = 0;
	virtual void sub_102953F0() = 0;
	virtual void sub_1029A2A0() = 0;
	virtual void sub_1029A310() = 0;
	virtual void sub_102953D0() = 0;
	virtual void sub_102953B0() = 0;
	virtual void sub_1029A2D0() = 0;
	virtual void sub_1029A2F0() = 0;
	virtual void sub_10299CF0() = 0;
	virtual void sub_10299D10() = 0;
	virtual void sub_10299D40() = 0;
	virtual void sub_10299DF0() = 0;
	virtual void sub_10299D70() = 0;
	virtual void sub_10299DC0() = 0;
	virtual void sub_10299DA0() = 0;
	virtual void sub_1029A1E0() = 0;
	virtual void sub_1029A200() = 0;
	virtual void sub_1029A400() = 0;
	virtual void sub_1029AE30() = 0;
	virtual void sub_1029AE70() = 0;
	virtual void sub_1029AEC0() = 0;
	virtual void sub_10295400() = 0;
	virtual void sub_10295410() = 0;
	virtual void sub_1029D250() = 0;
	virtual void sub_1029D280() = 0;
	virtual void sub_1029D0F0() = 0;
	virtual void sub_1029D090() = 0;
	virtual void sub_1029D0B0() = 0;
	virtual void sub_10295420() = 0;
	virtual void sub_1029AF60() = 0;
	virtual void sub_1029B060() = 0;
	virtual void sub_1029B120() = 0;
	virtual void sub_1029B240() = 0;
	virtual void sub_1029B310() = 0;
	virtual void sub_1029B3B0() = 0;
	virtual void sub_1029B4A0() = 0;
	virtual void sub_1029B600() = 0;
	virtual void sub_1029B7F0() = 0;
	virtual void sub_1029B810() = 0;
	virtual void sub_1029B870() = 0;
	virtual void sub_1029B8D0() = 0;
	virtual void sub_10295430() = 0;
	virtual void sub_10295440() = 0;
	virtual void sub_10295450() = 0;
	virtual void sub_10295460() = 0;
	virtual void sub_10295470() = 0;
	virtual void sub_10295480() = 0;
	virtual void sub_10295490() = 0;
	virtual void sub_102954A0() = 0;
	virtual void sub_102954B0() = 0;
	virtual void sub_102954C0() = 0;
	virtual void sub_1029B900() = 0;
	virtual void sub_102954D0() = 0;
	virtual void sub_10295520() = 0;
	virtual void sub_10295530() = 0;
	virtual void sub_10295560() = 0;
	virtual void sub_10295570() = 0;
	virtual void sub_1029B930() = 0;
	virtual void sub_1029BE40() = 0;
	virtual void sub_1029BDE0() = 0;
	virtual void sub_10257C50() = 0;
	virtual void sub_10295580() = 0;
	virtual void sub_10295590() = 0;
	virtual void sub_102955A0() = 0;
	virtual void sub_1029C320() = 0;
	virtual void sub_102955B0() = 0;
	virtual void sub_102955C0() = 0;
	virtual void sub_10066DA03() = 0;
	virtual void sub_1029C340() = 0;
	virtual void sub_1029C350() = 0;
	virtual void sub_102955D0() = 0;
	virtual void sub_102955E0() = 0;
	virtual void sub_1029CFE0() = 0;
	virtual void sub_1029CFF0() = 0;
	virtual void sub_1029D030() = 0;
	virtual void sub_1029D050() = 0;
	virtual void sub_1029DAF0() = 0;
	virtual void sub_1029DBE0() = 0;
	virtual void sub_102955F0() = 0;
	virtual void sub_10295600() = 0;
	virtual void sub_10295610() = 0;
	virtual void sub_10295620() = 0;
	virtual void sub_10295630() = 0;
	virtual void sub_10295540() = 0;
	virtual void sub_10295550() = 0;
	virtual void sub_1029E140() = 0;
	virtual void sub_1029E1D0() = 0;
	virtual void sub_10295660() = 0;
	virtual void sub_10295670() = 0;
	virtual void sub_10295680() = 0;
	virtual void sub_10295690() = 0;
	virtual void sub_102956A0() = 0;
	virtual void sub_102977C0() = 0;
	virtual void sub_102977D0() = 0;
	virtual void sub_10297830() = 0;
	virtual void sub_10294B10() = 0;
	virtual void sub_10297890() = 0;
	virtual void sub_102978A0() = 0;
	virtual void sub_102978F0() = 0;
	virtual void sub_1029CBD0() = 0;
	virtual void sub_1029CBE0() = 0;
	virtual void sub_1029CBE02() = 0;
	virtual void sub_1029CBE03() = 0;
};