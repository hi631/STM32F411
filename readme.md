STM32F411でVGA(640x480)
<BR>
<BR>STM23F411で640x480で多色は無い様なので作ってみました(車輪の再発明かも)。
<BR>途中経過なので、今後大幅変更も有り得ます。
<BR>開発環境　：STM32CubeIDE 1.19.0+ST-LINK2
<BR>ターゲット：BlackPill(STM32F411)
<BR>こんな感じで表示されます。
<BR>639ドット目に書き込むと表示が崩れるのは仕様です(禁止して無い)。
<BR>(あれ、最下行が表示されてない様な)
![Image 1](img/testdisp.jpg)
<BR>ハードはBlackPillをVGAコネクタに、hsVsは直付け、RGBは500オームが入ってます。
<BR>  HS  <- PA6
<BR>  VS  <- PB1
<BR>  R   <- PA7
<BR>  G   <- PA1
<BR>  B   <- PB8
<BR>  GND <- GND
![Image 1](img/Blackpill.jpg)

