#pragma once
#include "../windissect_forwards.h"

// Reconstructed from taskbar.dll by Windissect. 5 member(s).
class CByteHashTable {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddUpdateItem@CByteHashTable@@AEAAJHPEBEI0IPEAEI@Z
    long _AddUpdateItem(int, unsigned char const *, unsigned int, unsigned char const *, unsigned int, unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateHashKey@CByteHashTable@@AEBAIPEBEII@Z
    unsigned int _CalculateHashKey(unsigned char const *, unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValueWorker@CByteHashTable@@AEBAJPEAUBHASHENTRY@1@PEAPEAEPEAHPEAEI@Z
    long _GetValueWorker(WindissectOpaque *, unsigned char * *, int *, unsigned char *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GrowTable@CByteHashTable@@AEAAXXZ
    void _GrowTable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LookupEntry@CByteHashTable@@AEBAPEAUBHASHENTRY@1@PEBEIPEAIPEAPEAU21@@Z
    WindissectOpaque * _LookupEntry(unsigned char const *, unsigned int, unsigned int *, WindissectOpaque * *) const;
};
