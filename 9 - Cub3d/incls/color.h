/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tastybao <tastybao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:19:50 by tastybao          #+#    #+#             */
/*   Updated: 2023/07/26 21:19:50 by tastybao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

# include <stdint.h>

int	rgb(uint8_t red, uint8_t green, uint8_t blue);
int	set_color_red_value(int color, int red_value);
int	set_color_green_value(int color, int red_value);
int	set_color_blue_value(int color, int red_value);

// Colors ref: https://github.com/pygame/pygame/blob/main/src_py/colordict.py
// Colors preview: https://www.pygame.org/docs/ref/color_list.html
// Used color palette: https://flatuicolors.com/palette/defo

# define C_ALICEBLUE 0xf0f8ff
# define C_ANTIQUEWHITE 0xfaebd7
# define C_ANTIQUEWHITE1 0xffefdb
# define C_ANTIQUEWHITE2 0xeedfcc
# define C_ANTIQUEWHITE3 0xcdc0b0
# define C_ANTIQUEWHITE4 0x8b8378
# define C_AQUA 0x00ffff
# define C_AQUAMARINE 0x7fffd4
# define C_AQUAMARINE1 0x7fffd4
# define C_AQUAMARINE2 0x76eec6
# define C_AQUAMARINE3 0x66cdaa
# define C_AQUAMARINE4 0x458b74
# define C_AZURE 0xf0ffff
# define C_AZURE1 0xf0ffff
# define C_AZURE3 0xc1cdcd
# define C_AZURE2 0xe0eeee
# define C_AZURE4 0x838b8b
# define C_BEIGE 0xf5f5dc
# define C_BISQUE 0xffe4c4
# define C_BISQUE1 0xffe4c4
# define C_BISQUE2 0xeed5b7
# define C_BISQUE3 0xcdb79e
# define C_BISQUE4 0x8b7d6b
# define C_BLACK 0x000000
# define C_BLANCHEDALMOND 0xffebcd
# define C_BLUE 0x0000ff
# define C_BLUE1 0x0000ff
# define C_BLUE2 0x0000ee
# define C_BLUE3 0x0000cd
# define C_BLUE4 0x00008b
# define C_BLUEVIOLET 0x8a2be2
# define C_BROWN 0xa52a2a
# define C_BROWN1 0xff4040
# define C_BROWN2 0xee3b3b
# define C_BROWN3 0xcd3333
# define C_BROWN4 0x8b2323
# define C_BURLYWOOD 0xdeb887
# define C_BURLYWOOD1 0xffd39b
# define C_BURLYWOOD2 0xeec591
# define C_BURLYWOOD3 0xcdaa7d
# define C_BURLYWOOD4 0x8b7355
# define C_CADETBLUE 0x5f9ea0
# define C_CADETBLUE1 0x98f5ff
# define C_CADETBLUE2 0x8ee5ee
# define C_CADETBLUE3 0x7ac5cd
# define C_CADETBLUE4 0x53868b
# define C_CHARTREUSE 0x7fff00
# define C_CHARTREUSE1 0x7fff00
# define C_CHARTREUSE2 0x76ee00
# define C_CHARTREUSE3 0x66cd00
# define C_CHARTREUSE4 0x458b00
# define C_CHOCOLATE 0xd2691e
# define C_CHOCOLATE1 0xff7f24
# define C_CHOCOLATE2 0xee7621
# define C_CHOCOLATE3 0xcd661d
# define C_CHOCOLATE4 0x8b4513
# define C_CORAL 0xff7f50
# define C_CORAL1 0xff7256
# define C_CORAL2 0xee6a50
# define C_CORAL3 0xcd5b45
# define C_CORAL4 0x8b3e2f
# define C_CORNFLOWERBLUE 0x6495ed
# define C_CORNSILK 0xfff8dc
# define C_CORNSILK1 0xfff8dc
# define C_CORNSILK2 0xeee8cd
# define C_CORNSILK3 0xcdc8b1
# define C_CORNSILK4 0x8b8878
# define C_CRIMSON 0xdc143c
# define C_CYAN 0x00ffff
# define C_CYAN1 0x00ffff
# define C_CYAN2 0x00eeee
# define C_CYAN3 0x00cdcd
# define C_CYAN4 0x008b8b
# define C_DARKBLUE 0x00008b
# define C_DARKCYAN 0x008b8b
# define C_DARKGOLDENROD 0xb8860b
# define C_DARKGOLDENROD1 0xffb90f
# define C_DARKGOLDENROD2 0xeead0e
# define C_DARKGOLDENROD3 0xcd950c
# define C_DARKGOLDENROD4 0x8b6508
# define C_DARKGRAY 0xa9a9a9
# define C_DARKGREEN 0x006400
# define C_DARKGREY 0xa9a9a9
# define C_DARKKHAKI 0xbdb76b
# define C_DARKMAGENTA 0x8b008b
# define C_DARKOLIVEGREEN 0x556b2f
# define C_DARKOLIVEGREEN1 0xcaff70
# define C_DARKOLIVEGREEN2 0xbcee68
# define C_DARKOLIVEGREEN3 0xa2cd5a
# define C_DARKOLIVEGREEN4 0x6e8b3d
# define C_DARKORANGE 0xff8c00
# define C_DARKORANGE1 0xff7f00
# define C_DARKORANGE2 0xee7600
# define C_DARKORANGE3 0xcd6600
# define C_DARKORANGE4 0x8b4500
# define C_DARKORCHID 0x9932cc
# define C_DARKORCHID1 0xbf3eff
# define C_DARKORCHID2 0xb23aee
# define C_DARKORCHID3 0x9a32cd
# define C_DARKORCHID4 0x68228b
# define C_DARKRED 0x8b0000
# define C_DARKSALMON 0xe9967a
# define C_DARKSEAGREEN 0x8fbc8f
# define C_DARKSEAGREEN1 0xc1ffc1
# define C_DARKSEAGREEN2 0xb4eeb4
# define C_DARKSEAGREEN3 0x9bcd9b
# define C_DARKSEAGREEN4 0x698b69
# define C_DARKSLATEBLUE 0x483d8b
# define C_DARKSLATEGRAY 0x2f4f4f
# define C_DARKSLATEGRAY1 0x97ffff
# define C_DARKSLATEGRAY2 0x8deeee
# define C_DARKSLATEGRAY3 0x79cdcd
# define C_DARKSLATEGRAY4 0x528b8b
# define C_DARKSLATEGREY 0x2f4f4f
# define C_DARKTURQUOISE 0x00ced1
# define C_DARKVIOLET 0x9400d3
# define C_DEEPPINK 0xff1493
# define C_DEEPPINK1 0xff1493
# define C_DEEPPINK2 0xee1289
# define C_DEEPPINK3 0xcd1076
# define C_DEEPPINK4 0x8b0a50
# define C_DEEPSKYBLUE 0x00bfff
# define C_DEEPSKYBLUE1 0x00bfff
# define C_DEEPSKYBLUE2 0x00b2ee
# define C_DEEPSKYBLUE3 0x009acd
# define C_DEEPSKYBLUE4 0x00688b
# define C_DIMGRAY 0x696969
# define C_DIMGREY 0x696969
# define C_DODGERBLUE 0x1e90ff
# define C_DODGERBLUE1 0x1e90ff
# define C_DODGERBLUE2 0x1c86ee
# define C_DODGERBLUE3 0x1874cd
# define C_DODGERBLUE4 0x104e8b
# define C_FIREBRICK 0xb22222
# define C_FIREBRICK1 0xff3030
# define C_FIREBRICK2 0xee2c2c
# define C_FIREBRICK3 0xcd2626
# define C_FIREBRICK4 0x8b1a1a
# define C_FLORALWHITE 0xfffaf0
# define C_FORESTGREEN 0x228b22
# define C_FUCHSIA 0xff00ff
# define C_GAINSBORO 0xdcdcdc
# define C_GHOSTWHITE 0xf8f8ff
# define C_GOLD 0xffd700
# define C_GOLD1 0xffd700
# define C_GOLD2 0xeec900
# define C_GOLD3 0xcdad00
# define C_GOLD4 0x8b7500
# define C_GOLDENROD 0xdaa520
# define C_GOLDENROD1 0xffc125
# define C_GOLDENROD2 0xeeb422
# define C_GOLDENROD3 0xcd9b1d
# define C_GOLDENROD4 0x8b6914
# define C_GRAY 0xbebebe
# define C_GRAY0 0x000000
# define C_GRAY1 0x030303
# define C_GRAY2 0x050505
# define C_GRAY3 0x080808
# define C_GRAY4 0x0a0a0a
# define C_GRAY5 0x0d0d0d
# define C_GRAY6 0x0f0f0f
# define C_GRAY7 0x121212
# define C_GRAY8 0x141414
# define C_GRAY9 0x171717
# define C_GRAY10 0x1a1a1a
# define C_GRAY11 0x1c1c1c
# define C_GRAY12 0x1f1f1f
# define C_GRAY13 0x212121
# define C_GRAY14 0x242424
# define C_GRAY15 0x262626
# define C_GRAY16 0x292929
# define C_GRAY17 0x2b2b2b
# define C_GRAY18 0x2e2e2e
# define C_GRAY19 0x303030
# define C_GRAY20 0x333333
# define C_GRAY21 0x363636
# define C_GRAY22 0x383838
# define C_GRAY23 0x3b3b3b
# define C_GRAY24 0x3d3d3d
# define C_GRAY25 0x404040
# define C_GRAY26 0x424242
# define C_GRAY27 0x454545
# define C_GRAY28 0x474747
# define C_GRAY29 0x4a4a4a
# define C_GRAY30 0x4d4d4d
# define C_GRAY31 0x4f4f4f
# define C_GRAY32 0x525252
# define C_GRAY33 0x545454
# define C_GRAY34 0x575757
# define C_GRAY35 0x595959
# define C_GRAY36 0x5c5c5c
# define C_GRAY37 0x5e5e5e
# define C_GRAY38 0x616161
# define C_GRAY39 0x636363
# define C_GRAY40 0x666666
# define C_GRAY41 0x696969
# define C_GRAY42 0x6b6b6b
# define C_GRAY43 0x6e6e6e
# define C_GRAY44 0x707070
# define C_GRAY45 0x737373
# define C_GRAY46 0x757575
# define C_GRAY47 0x787878
# define C_GRAY48 0x7a7a7a
# define C_GRAY49 0x7d7d7d
# define C_GRAY50 0x7f7f7f
# define C_GRAY51 0x828282
# define C_GRAY52 0x858585
# define C_GRAY53 0x878787
# define C_GRAY54 0x8a8a8a
# define C_GRAY55 0x8c8c8c
# define C_GRAY56 0x8f8f8f
# define C_GRAY57 0x919191
# define C_GRAY58 0x949494
# define C_GRAY59 0x969696
# define C_GRAY60 0x999999
# define C_GRAY61 0x9c9c9c
# define C_GRAY62 0x9e9e9e
# define C_GRAY63 0xa1a1a1
# define C_GRAY64 0xa3a3a3
# define C_GRAY65 0xa6a6a6
# define C_GRAY66 0xa8a8a8
# define C_GRAY67 0xababab
# define C_GRAY68 0xadadad
# define C_GRAY69 0xb0b0b0
# define C_GRAY70 0xb3b3b3
# define C_GRAY71 0xb5b5b5
# define C_GRAY72 0xb8b8b8
# define C_GRAY73 0xbababa
# define C_GRAY74 0xbdbdbd
# define C_GRAY75 0xbfbfbf
# define C_GRAY76 0xc2c2c2
# define C_GRAY77 0xc4c4c4
# define C_GRAY78 0xc7c7c7
# define C_GRAY79 0xc9c9c9
# define C_GRAY80 0xcccccc
# define C_GRAY81 0xcfcfcf
# define C_GRAY82 0xd1d1d1
# define C_GRAY83 0xd4d4d4
# define C_GRAY84 0xd6d6d6
# define C_GRAY85 0xd9d9d9
# define C_GRAY86 0xdbdbdb
# define C_GRAY87 0xdedede
# define C_GRAY88 0xe0e0e0
# define C_GRAY89 0xe3e3e3
# define C_GRAY90 0xe5e5e5
# define C_GRAY91 0xe8e8e8
# define C_GRAY92 0xebebeb
# define C_GRAY93 0xededed
# define C_GRAY94 0xf0f0f0
# define C_GRAY95 0xf2f2f2
# define C_GRAY96 0xf5f5f5
# define C_GRAY97 0xf7f7f7
# define C_GRAY98 0xfafafa
# define C_GRAY99 0xfcfcfc
# define C_GRAY100 0xffffff
# define C_GREEN 0x00ff00
# define C_GREEN1 0x00ff00
# define C_GREEN2 0x00ee00
# define C_GREEN3 0x00cd00
# define C_GREEN4 0x008b00
# define C_GREENYELLOW 0xadff2f
# define C_GREY 0xbebebe
# define C_GREY0 0x000000
# define C_GREY1 0x030303
# define C_GREY2 0x050505
# define C_GREY3 0x080808
# define C_GREY4 0x0a0a0a
# define C_GREY5 0x0d0d0d
# define C_GREY6 0x0f0f0f
# define C_GREY7 0x121212
# define C_GREY8 0x141414
# define C_GREY9 0x171717
# define C_GREY10 0x1a1a1a
# define C_GREY11 0x1c1c1c
# define C_GREY12 0x1f1f1f
# define C_GREY13 0x212121
# define C_GREY14 0x242424
# define C_GREY15 0x262626
# define C_GREY16 0x292929
# define C_GREY17 0x2b2b2b
# define C_GREY18 0x2e2e2e
# define C_GREY19 0x303030
# define C_GREY20 0x333333
# define C_GREY21 0x363636
# define C_GREY22 0x383838
# define C_GREY23 0x3b3b3b
# define C_GREY24 0x3d3d3d
# define C_GREY25 0x404040
# define C_GREY26 0x424242
# define C_GREY27 0x454545
# define C_GREY28 0x474747
# define C_GREY29 0x4a4a4a
# define C_GREY30 0x4d4d4d
# define C_GREY31 0x4f4f4f
# define C_GREY32 0x525252
# define C_GREY33 0x545454
# define C_GREY34 0x575757
# define C_GREY35 0x595959
# define C_GREY36 0x5c5c5c
# define C_GREY37 0x5e5e5e
# define C_GREY38 0x616161
# define C_GREY39 0x636363
# define C_GREY40 0x666666
# define C_GREY41 0x696969
# define C_GREY42 0x6b6b6b
# define C_GREY43 0x6e6e6e
# define C_GREY44 0x707070
# define C_GREY45 0x737373
# define C_GREY46 0x757575
# define C_GREY47 0x787878
# define C_GREY48 0x7a7a7a
# define C_GREY49 0x7d7d7d
# define C_GREY50 0x7f7f7f
# define C_GREY51 0x828282
# define C_GREY52 0x858585
# define C_GREY53 0x878787
# define C_GREY54 0x8a8a8a
# define C_GREY55 0x8c8c8c
# define C_GREY56 0x8f8f8f
# define C_GREY57 0x919191
# define C_GREY58 0x949494
# define C_GREY59 0x969696
# define C_GREY60 0x999999
# define C_GREY61 0x9c9c9c
# define C_GREY62 0x9e9e9e
# define C_GREY63 0xa1a1a1
# define C_GREY64 0xa3a3a3
# define C_GREY65 0xa6a6a6
# define C_GREY66 0xa8a8a8
# define C_GREY67 0xababab
# define C_GREY68 0xadadad
# define C_GREY69 0xb0b0b0
# define C_GREY70 0xb3b3b3
# define C_GREY71 0xb5b5b5
# define C_GREY72 0xb8b8b8
# define C_GREY73 0xbababa
# define C_GREY74 0xbdbdbd
# define C_GREY75 0xbfbfbf
# define C_GREY76 0xc2c2c2
# define C_GREY77 0xc4c4c4
# define C_GREY78 0xc7c7c7
# define C_GREY79 0xc9c9c9
# define C_GREY80 0xcccccc
# define C_GREY81 0xcfcfcf
# define C_GREY82 0xd1d1d1
# define C_GREY83 0xd4d4d4
# define C_GREY84 0xd6d6d6
# define C_GREY85 0xd9d9d9
# define C_GREY86 0xdbdbdb
# define C_GREY87 0xdedede
# define C_GREY88 0xe0e0e0
# define C_GREY89 0xe3e3e3
# define C_GREY90 0xe5e5e5
# define C_GREY91 0xe8e8e8
# define C_GREY92 0xebebeb
# define C_GREY93 0xededed
# define C_GREY94 0xf0f0f0
# define C_GREY95 0xf2f2f2
# define C_GREY96 0xf5f5f5
# define C_GREY97 0xf7f7f7
# define C_GREY98 0xfafafa
# define C_GREY99 0xfcfcfc
# define C_GREY100 0xffffff
# define C_HONEYDEW 0xf0fff0
# define C_HONEYDEW1 0xf0fff0
# define C_HONEYDEW2 0xe0eee0
# define C_HONEYDEW3 0xc1cdc1
# define C_HONEYDEW4 0x838b83
# define C_HOTPINK 0xff69b4
# define C_HOTPINK1 0xff6eb4
# define C_HOTPINK2 0xee6aa7
# define C_HOTPINK3 0xcd6090
# define C_HOTPINK4 0x8b3a62
# define C_INDIANRED 0xcd5c5c
# define C_INDIANRED1 0xff6a6a
# define C_INDIANRED2 0xee6363
# define C_INDIANRED3 0xcd5555
# define C_INDIANRED4 0x8b3a3a
# define C_INDIGO 0x4b0082
# define C_IVORY 0xfffff0
# define C_IVORY1 0xfffff0
# define C_IVORY2 0xeeeee0
# define C_IVORY3 0xcdcdc1
# define C_IVORY4 0x8b8b83
# define C_KHAKI 0xf0e68c
# define C_KHAKI1 0xfff68f
# define C_KHAKI2 0xeee685
# define C_KHAKI3 0xcdc673
# define C_KHAKI4 0x8b864e
# define C_LAVENDER 0xe6e6fa
# define C_LAVENDERBLUSH 0xfff0f5
# define C_LAVENDERBLUSH1 0xfff0f5
# define C_LAVENDERBLUSH2 0xeee0e5
# define C_LAVENDERBLUSH3 0xcdc1c5
# define C_LAVENDERBLUSH4 0x8b8386
# define C_LAWNGREEN 0x7cfc00
# define C_LEMONCHIFFON 0xfffacd
# define C_LEMONCHIFFON1 0xfffacd
# define C_LEMONCHIFFON2 0xeee9bf
# define C_LEMONCHIFFON3 0xcdc9a5
# define C_LEMONCHIFFON4 0x8b8970
# define C_LIGHTBLUE 0xadd8e6
# define C_LIGHTBLUE1 0xbfefff
# define C_LIGHTBLUE2 0xb2dfee
# define C_LIGHTBLUE3 0x9ac0cd
# define C_LIGHTBLUE4 0x68838b
# define C_LIGHTCORAL 0xf08080
# define C_LIGHTCYAN 0xe0ffff
# define C_LIGHTCYAN1 0xe0ffff
# define C_LIGHTCYAN2 0xd1eeee
# define C_LIGHTCYAN3 0xb4cdcd
# define C_LIGHTCYAN4 0x7a8b8b
# define C_LIGHTGOLDENROD 0xeedd82
# define C_LIGHTGOLDENROD1 0xffec8b
# define C_LIGHTGOLDENROD2 0xeedc82
# define C_LIGHTGOLDENROD3 0xcdbe70
# define C_LIGHTGOLDENROD4 0x8b814c
# define C_LIGHTGOLDENRODYELLOW 0xfafad2
# define C_LIGHTGRAY 0xd3d3d3
# define C_LIGHTGREEN 0x90ee90
# define C_LIGHTGREY 0xd3d3d3
# define C_LIGHTPINK 0xffb6c1
# define C_LIGHTPINK1 0xffaeb9
# define C_LIGHTPINK2 0xeea2ad
# define C_LIGHTPINK3 0xcd8c95
# define C_LIGHTPINK4 0x8b5f65
# define C_LIGHTSALMON 0xffa07a
# define C_LIGHTSALMON1 0xffa07a
# define C_LIGHTSALMON2 0xee9572
# define C_LIGHTSALMON3 0xcd8162
# define C_LIGHTSALMON4 0x8b5742
# define C_LIGHTSEAGREEN 0x20b2aa
# define C_LIGHTSKYBLUE 0x87cefa
# define C_LIGHTSKYBLUE1 0xb0e2ff
# define C_LIGHTSKYBLUE2 0xa4d3ee
# define C_LIGHTSKYBLUE3 0x8db6cd
# define C_LIGHTSKYBLUE4 0x607b8b
# define C_LIGHTSLATEBLUE 0x8470ff
# define C_LIGHTSLATEGRAY 0x778899
# define C_LIGHTSLATEGREY 0x778899
# define C_LIGHTSTEELBLUE 0xb0c4de
# define C_LIGHTSTEELBLUE1 0xcae1ff
# define C_LIGHTSTEELBLUE2 0xbcd2ee
# define C_LIGHTSTEELBLUE3 0xa2b5cd
# define C_LIGHTSTEELBLUE4 0x6e7b8b
# define C_LIGHTYELLOW 0xffffe0
# define C_LIGHTYELLOW1 0xffffe0
# define C_LIGHTYELLOW2 0xeeeed1
# define C_LIGHTYELLOW3 0xcdcdb4
# define C_LIGHTYELLOW4 0x8b8b7a
# define C_LINEN 0xfaf0e6
# define C_LIME 0x00ff00
# define C_LIMEGREEN 0x32cd32
# define C_MAGENTA 0xff00ff
# define C_MAGENTA1 0xff00ff
# define C_MAGENTA2 0xee00ee
# define C_MAGENTA3 0xcd00cd
# define C_MAGENTA4 0x8b008b
# define C_MAROON 0xb03060
# define C_MAROON1 0xff34b3
# define C_MAROON2 0xee30a7
# define C_MAROON3 0xcd2990
# define C_MAROON4 0x8b1c62
# define C_MEDIUMAQUAMARINE 0x66cdaa
# define C_MEDIUMBLUE 0x0000cd
# define C_MEDIUMORCHID 0xba55d3
# define C_MEDIUMORCHID1 0xe066ff
# define C_MEDIUMORCHID2 0xd15fee
# define C_MEDIUMORCHID3 0xb452cd
# define C_MEDIUMORCHID4 0x7a378b
# define C_MEDIUMPURPLE 0x9370db
# define C_MEDIUMPURPLE1 0xab82ff
# define C_MEDIUMPURPLE2 0x9f79ee
# define C_MEDIUMPURPLE3 0x8968cd
# define C_MEDIUMPURPLE4 0x5d478b
# define C_MEDIUMSEAGREEN 0x3cb371
# define C_MEDIUMSLATEBLUE 0x7b68ee
# define C_MEDIUMSPRINGGREEN 0x00fa9a
# define C_MEDIUMTURQUOISE 0x48d1cc
# define C_MEDIUMVIOLETRED 0xc71585
# define C_MIDNIGHTBLUE 0x191970
# define C_MINTCREAM 0xf5fffa
# define C_MISTYROSE 0xffe4e1
# define C_MISTYROSE1 0xffe4e1
# define C_MISTYROSE2 0xeed5d2
# define C_MISTYROSE3 0xcdb7b5
# define C_MISTYROSE4 0x8b7d7b
# define C_MOCCASIN 0xffe4b5
# define C_NAVAJOWHITE 0xffdead
# define C_NAVAJOWHITE1 0xffdead
# define C_NAVAJOWHITE2 0xeecfa1
# define C_NAVAJOWHITE3 0xcdb38b
# define C_NAVAJOWHITE4 0x8b795e
# define C_NAVY 0x000080
# define C_NAVYBLUE 0x000080
# define C_OLDLACE 0xfdf5e6
# define C_OLIVE 0x808000
# define C_OLIVEDRAB 0x6b8e23
# define C_OLIVEDRAB1 0xc0ff3e
# define C_OLIVEDRAB2 0xb3ee3a
# define C_OLIVEDRAB3 0x9acd32
# define C_OLIVEDRAB4 0x698b22
# define C_ORANGE 0xffa500
# define C_ORANGE1 0xffa500
# define C_ORANGE2 0xee9a00
# define C_ORANGE3 0xcd8500
# define C_ORANGE4 0x8b5a00
# define C_ORANGERED 0xff4500
# define C_ORANGERED1 0xff4500
# define C_ORANGERED2 0xee4000
# define C_ORANGERED3 0xcd3700
# define C_ORANGERED4 0x8b2500
# define C_ORCHID 0xda70d6
# define C_ORCHID1 0xff83fa
# define C_ORCHID2 0xee7ae9
# define C_ORCHID3 0xcd69c9
# define C_ORCHID4 0x8b4789
# define C_PALEGREEN 0x98fb98
# define C_PALEGREEN1 0x9aff9a
# define C_PALEGREEN2 0x90ee90
# define C_PALEGREEN3 0x7ccd7c
# define C_PALEGREEN4 0x548b54
# define C_PALEGOLDENROD 0xeee8aa
# define C_PALETURQUOISE 0xafeeee
# define C_PALETURQUOISE1 0xbbffff
# define C_PALETURQUOISE2 0xaeeeee
# define C_PALETURQUOISE3 0x96cdcd
# define C_PALETURQUOISE4 0x668b8b
# define C_PALEVIOLETRED 0xdb7093
# define C_PALEVIOLETRED1 0xff82ab
# define C_PALEVIOLETRED2 0xee799f
# define C_PALEVIOLETRED3 0xcd6889
# define C_PALEVIOLETRED4 0x8b475d
# define C_PAPAYAWHIP 0xffefd5
# define C_PEACHPUFF 0xffdab9
# define C_PEACHPUFF1 0xffdab9
# define C_PEACHPUFF2 0xeecbad
# define C_PEACHPUFF3 0xcdaf95
# define C_PEACHPUFF4 0x8b7765
# define C_PERU 0xcd853f
# define C_PINK 0xffc0cb
# define C_PINK1 0xffb5c5
# define C_PINK2 0xeea9b8
# define C_PINK3 0xcd919e
# define C_PINK4 0x8b636c
# define C_PLUM 0xdda0dd
# define C_PLUM1 0xffbbff
# define C_PLUM2 0xeeaeee
# define C_PLUM3 0xcd96cd
# define C_PLUM4 0x8b668b
# define C_POWDERBLUE 0xb0e0e6
# define C_PURPLE 0xa020f0
# define C_PURPLE1 0x9b30ff
# define C_PURPLE2 0x912cee
# define C_PURPLE3 0x7d26cd
# define C_PURPLE4 0x551a8b
# define C_RED 0xff0000
# define C_RED1 0xff0000
# define C_RED2 0xee0000
# define C_RED3 0xcd0000
# define C_RED4 0x8b0000
# define C_ROSYBROWN 0xbc8f8f
# define C_ROSYBROWN1 0xffc1c1
# define C_ROSYBROWN2 0xeeb4b4
# define C_ROSYBROWN3 0xcd9b9b
# define C_ROSYBROWN4 0x8b6969
# define C_ROYALBLUE 0x4169e1
# define C_ROYALBLUE1 0x4876ff
# define C_ROYALBLUE2 0x436eee
# define C_ROYALBLUE3 0x3a5fcd
# define C_ROYALBLUE4 0x27408b
# define C_SALMON 0xfa8072
# define C_SALMON1 0xff8c69
# define C_SALMON2 0xee8262
# define C_SALMON3 0xcd7054
# define C_SALMON4 0x8b4c39
# define C_SADDLEBROWN 0x8b4513
# define C_SANDYBROWN 0xf4a460
# define C_SEAGREEN 0x2e8b57
# define C_SEAGREEN1 0x54ff9f
# define C_SEAGREEN2 0x4eee94
# define C_SEAGREEN3 0x43cd80
# define C_SEAGREEN4 0x2e8b57
# define C_SEASHELL 0xfff5ee
# define C_SEASHELL1 0xfff5ee
# define C_SEASHELL2 0xeee5de
# define C_SEASHELL3 0xcdc5bf
# define C_SEASHELL4 0x8b8682
# define C_SIENNA 0xa0522d
# define C_SIENNA1 0xff8247
# define C_SIENNA2 0xee7942
# define C_SIENNA3 0xcd6839
# define C_SIENNA4 0x8b4726
# define C_SILVER 0xc0c0c0
# define C_SKYBLUE 0x87ceeb
# define C_SKYBLUE1 0x87ceff
# define C_SKYBLUE2 0x7ec0ee
# define C_SKYBLUE3 0x6ca6cd
# define C_SKYBLUE4 0x4a708b
# define C_SLATEBLUE 0x6a5acd
# define C_SLATEBLUE1 0x836fff
# define C_SLATEBLUE2 0x7a67ee
# define C_SLATEBLUE3 0x6959cd
# define C_SLATEBLUE4 0x473c8b
# define C_SLATEGRAY 0x708090
# define C_SLATEGRAY1 0xc6e2ff
# define C_SLATEGRAY2 0xb9d3ee
# define C_SLATEGRAY3 0x9fb6cd
# define C_SLATEGRAY4 0x6c7b8b
# define C_SLATEGREY 0x708090
# define C_SNOW 0xfffafa
# define C_SNOW1 0xfffafa
# define C_SNOW2 0xeee9e9
# define C_SNOW3 0xcdc9c9
# define C_SNOW4 0x8b8989
# define C_SPRINGGREEN 0x00ff7f
# define C_SPRINGGREEN1 0x00ff7f
# define C_SPRINGGREEN2 0x00ee76
# define C_SPRINGGREEN3 0x00cd66
# define C_SPRINGGREEN4 0x008b45
# define C_STEELBLUE 0x4682b4
# define C_STEELBLUE1 0x63b8ff
# define C_STEELBLUE2 0x5cacee
# define C_STEELBLUE3 0x4f94cd
# define C_STEELBLUE4 0x36648b
# define C_TAN 0xd2b48c
# define C_TAN1 0xffa54f
# define C_TAN2 0xee9a49
# define C_TAN3 0xcd853f
# define C_TAN4 0x8b5a2b
# define C_TEAL 0x008080
# define C_THISTLE 0xd8bfd8
# define C_THISTLE1 0xffe1ff
# define C_THISTLE2 0xeed2ee
# define C_THISTLE3 0xcdb5cd
# define C_THISTLE4 0x8b7b8b
# define C_TOMATO 0xff6347
# define C_TOMATO1 0xff6347
# define C_TOMATO2 0xee5c42
# define C_TOMATO3 0xcd4f39
# define C_TOMATO4 0x8b3626
# define C_TURQUOISE 0x40e0d0
# define C_TURQUOISE1 0x00f5ff
# define C_TURQUOISE2 0x00e5ee
# define C_TURQUOISE3 0x00c5cd
# define C_TURQUOISE4 0x00868b
# define C_VIOLET 0xee82ee
# define C_VIOLETRED 0xd02090
# define C_VIOLETRED1 0xff3e96
# define C_VIOLETRED2 0xee3a8c
# define C_VIOLETRED3 0xcd3278
# define C_VIOLETRED4 0x8b2252
# define C_WHEAT 0xf5deb3
# define C_WHEAT1 0xffe7ba
# define C_WHEAT2 0xeed8ae
# define C_WHEAT3 0xcdba96
# define C_WHEAT4 0x8b7e66
# define C_WHITE 0xffffff
# define C_WHITESMOKE 0xf5f5f5
# define C_YELLOW 0xffff00
# define C_YELLOW1 0xffff00
# define C_YELLOW2 0xeeee00
# define C_YELLOW3 0xcdcd00
# define C_YELLOW4 0x8b8b00
# define C_YELLOWGREEN 0x9acd32

#endif