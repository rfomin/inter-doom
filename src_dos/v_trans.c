// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id: info.c,v 1.44 1998/05/12 12:46:36 phares Exp $
//
//  BOOM, a modified and improved DOOM engine
//  Copyright (C) 1999 by
//  id Software, Chi Hoang, Lee Killough, Jim Flynn, Rand Phares, Ty Halderman
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 
//  02111-1307, USA.
//
// DESCRIPTION:
//  palette color ranges for translation.
//
//-----------------------------------------------------------------------------

#include "doomtype.h"

// From boom202s/INFO.C:9268-9470

const byte cr_brick[]=
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
     16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
     32,33,34,35,36,37,38,39,40,41,42,43,46,46,46,46,
     48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
     64,65,66,46,68,69,70,71,72,73,74,75,76,77,78,79,
     80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
     96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
     112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
     160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
     16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,
     176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
     192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
     240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};

const byte cr_tan[]=
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
     16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
     32,33,34,35,36,37,38,39,40,41,42,43,78,45,78,78,
     48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
     64,65,66,78,68,69,70,71,72,73,74,75,76,77,78,79,
     80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
     96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
     112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
     160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
     48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,
     192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
     240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};
    
const byte cr_gray[]=
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
     16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
     32,33,34,35,36,37,38,39,40,41,42,43,110,110,46,110,
     48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
     64,65,66,110,68,69,70,71,72,73,74,75,76,77,78,79,
     80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
     96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
     112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
     160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
     80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,
     192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
     240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};
    
const byte cr_green[]=
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
     16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
     32,33,34,35,36,37,38,39,40,41,42,43,127,127,46,127,
     48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
     64,65,66,127,68,69,70,71,72,73,74,75,76,77,78,79,
     80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
     96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
     112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
     160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
     114,115,116,117,118,119,120,121,122,123,124,125,126,126,127,127,
     192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
     240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};
    
const byte cr_brown[]=
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
     16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
     32,33,34,35,36,37,38,39,40,41,42,43,143,143,46,143,
     48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
     64,65,66,143,68,69,70,71,72,73,74,75,76,77,78,79,
     80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
     96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
     112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
     160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
     240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};
    
const byte cr_gold[]=
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
     16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
     32,33,34,35,36,37,38,39,40,41,42,43,167,167,46,167,
     48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
     64,65,66,167,68,69,70,71,72,73,74,75,76,77,78,79,
     80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
     96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
     112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
     160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
     160,160,161,161,162,162,163,163,164,164,165,165,166,166,167,167,
     192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
     240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};
    
const byte cr_red[]=
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
     16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
     32,33,34,35,36,37,38,39,40,41,42,43,191,191,46,191,
     48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
     64,65,66,191,68,69,70,71,72,73,74,75,76,77,78,79,
     80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
     96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
     112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
     160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
     176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
     192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
     240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};

const byte cr_blue[]=
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
     16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
     32,33,34,35,36,37,38,39,40,41,42,43,203,203,46,203,
     48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
     64,65,66,203,68,69,70,71,72,73,74,75,76,77,78,79,
     80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
     96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
     112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
     160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
     196,196,197,197,198,198,199,199,200,200,201,201,202,202,203,203,
     192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
     240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};

const byte cr_blue2[]=
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
     16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
     32,33,34,35,36,37,38,39,40,41,42,43,207,207,46,207,
     48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
     64,65,66,207,68,69,70,71,72,73,74,75,76,77,78,79,
     80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
     96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
     112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
     160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
     200,200,201,201,202,202,203,203,204,204,205,205,206,206,207,207,
     192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
     240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};

    
const byte cr_orange[]=
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
     16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
     32,33,34,35,36,37,38,39,40,41,42,43,223,223,46,223,
     48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
     64,65,66,223,68,69,70,71,72,73,74,75,76,77,78,79,
     80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
     96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
     112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
     160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
     240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};
    
const byte cr_yellow[]=
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
     16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
     32,33,34,35,36,37,38,39,40,41,42,43,231,231,46,231,
     48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
     64,65,66,231,68,69,70,71,72,73,74,75,76,77,78,79,
     80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
     96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
     112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
     128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
     144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
     160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
     224,224,225,225,226,226,227,227,228,228,229,229,230,230,231,231,
     192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
     208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
     224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
     240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255};
