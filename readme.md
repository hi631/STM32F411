STM32F411でVGA(640x480)
<BR>
<BR>STM23F411で640x480で多色は無い様なので作ってみました(車輪の再発明かも)。
<BR>途中経過なので、今後大幅変更も有り得ます。
<BR>開発環境　：STM32CubeIDE 1.19.0+ST-LINK2
<BR>ターゲット：BlackPill(STM32F411)
<BR>こんな感じで表示されます。
<BR>　※縦639ドット目が無効なのは仕様です。
<BR>　※縦７ドット目が行先頭に表示されるのも仕様です。
![Image 1](img/testdisp.jpg)
<BR>ハードはBlackPillをVGAコネクタに、hsVs信号は直付け、RGB信号は500オームが入ってます。
<BR>  HS  <- PA6
<BR>  VS  <- PB1
<BR>  R   <- PA7
<BR>  G   <- PA1
<BR>  B   <- PB8
<BR>  GND <- GND
![Image 1](img/Blackpill.jpg)

