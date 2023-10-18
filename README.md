# 玩具堆高機 Toy-Stacker
玩具堆高機：使用ESP32並以dualshock 3手把無線控制

Toy-Stacker control by dualshock 3 with ESP32

# 使用的零件 Component
  ESP32 NodeMCU-32S
  
  L298n *2

  TT Motor
  
  18650 battery

# 連接方式
<table class="MsoTableGrid" border="1" cellspacing="0" cellpadding="0" style="border-collapse:collapse;border:none;mso-border-alt:solid windowtext .5pt;
 mso-yfti-tbllook:1184;mso-padding-alt:0cm 5.4pt 0cm 5.4pt">
 <tbody><tr style="mso-yfti-irow:0;mso-yfti-firstrow:yes">
  <td width="277" valign="top" style="width:207.4pt;border:solid windowtext 1.0pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span style="font-family:&quot;新細明體&quot;,serif;mso-ascii-font-family:Calibri;mso-ascii-theme-font:
  minor-latin;mso-fareast-theme-font:minor-fareast;mso-hansi-font-family:Calibri;
  mso-hansi-theme-font:minor-latin;color:black">連接到</span><span lang="EN-US" style="color:black"> Connect to<o:p></o:p></span></p>
  <p class="MsoNormal"><span lang="EN-US"><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width="277" valign="top" style="width:207.4pt;border:solid windowtext 1.0pt;
  border-left:none;mso-border-left-alt:solid windowtext .5pt;mso-border-alt:
  solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black">ESP32 </span><span style="font-family:&quot;新細明體&quot;,serif;
  mso-ascii-font-family:Calibri;mso-ascii-theme-font:minor-latin;mso-fareast-theme-font:
  minor-fareast;mso-hansi-font-family:Calibri;mso-hansi-theme-font:minor-latin;
  color:black">針腳</span><span lang="EN-US" style="color:black"> ESP32 Pin<o:p></o:p></span></p>
  <p class="MsoNormal"><span lang="EN-US"><o:p>&nbsp;</o:p></span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:1">
  <td width="277" valign="top" style="width:207.4pt;border:solid windowtext 1.0pt;
  border-top:none;mso-border-top-alt:solid windowtext .5pt;mso-border-alt:solid windowtext .5pt;
  padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black">(1)L298n ENA<o:p></o:p></span></p>
  <p class="MsoNormal"><span lang="EN-US"><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width="277" valign="top" style="width:207.4pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal"><span lang="EN-US">26</span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:2">
  <td width="277" valign="top" style="width:207.4pt;border:solid windowtext 1.0pt;
  border-top:none;mso-border-top-alt:solid windowtext .5pt;mso-border-alt:solid windowtext .5pt;
  padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black">(1)L298n N1<o:p></o:p></span></p>
  <p class="MsoNormal"><span lang="EN-US"><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width="277" valign="top" style="width:207.4pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal"><span lang="EN-US">22</span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:3">
  <td width="277" valign="top" style="width:207.4pt;border:solid windowtext 1.0pt;
  border-top:none;mso-border-top-alt:solid windowtext .5pt;mso-border-alt:solid windowtext .5pt;
  padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black">(1)L298n N2<o:p></o:p></span></p>
  <p class="MsoNormal"><span lang="EN-US"><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width="277" valign="top" style="width:207.4pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal"><span lang="EN-US">23</span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:4">
  <td width="277" valign="top" style="width:207.4pt;border:solid windowtext 1.0pt;
  border-top:none;mso-border-top-alt:solid windowtext .5pt;mso-border-alt:solid windowtext .5pt;
  padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black">(1)L298n N3<o:p></o:p></span></p>
  <p class="MsoNormal"><span lang="EN-US"><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width="277" valign="top" style="width:207.4pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal"><span lang="EN-US">16</span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:5">
  <td width="277" valign="top" style="width:207.4pt;border:solid windowtext 1.0pt;
  border-top:none;mso-border-top-alt:solid windowtext .5pt;mso-border-alt:solid windowtext .5pt;
  padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black">(1)L298n N4<o:p></o:p></span></p>
  <p class="MsoNormal"><span lang="EN-US"><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width="277" valign="top" style="width:207.4pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal"><span lang="EN-US">17</span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:6">
  <td width="277" valign="top" style="width:207.4pt;border:solid windowtext 1.0pt;
  border-top:none;mso-border-top-alt:solid windowtext .5pt;mso-border-alt:solid windowtext .5pt;
  padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black">(1)L299n ENB<o:p></o:p></span></p>
  <p class="MsoNormal"><span lang="EN-US"><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width="277" valign="top" style="width:207.4pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal"><span lang="EN-US">27</span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:7">
  <td width="277" valign="top" style="width:207.4pt;border:solid windowtext 1.0pt;
  border-top:none;mso-border-top-alt:solid windowtext .5pt;mso-border-alt:solid windowtext .5pt;
  padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black">(2)L298n N1<o:p></o:p></span></p>
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black"><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width="277" valign="top" style="width:207.4pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal"><span lang="EN-US">18</span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:8">
  <td width="277" valign="top" style="width:207.4pt;border:solid windowtext 1.0pt;
  border-top:none;mso-border-top-alt:solid windowtext .5pt;mso-border-alt:solid windowtext .5pt;
  padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black">(2)L298n N2<o:p></o:p></span></p>
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black"><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width="277" valign="top" style="width:207.4pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal"><span lang="EN-US">19</span></p>
  </td>
 </tr>
 <tr style="mso-yfti-irow:9;mso-yfti-lastrow:yes">
  <td width="277" valign="top" style="width:207.4pt;border:solid windowtext 1.0pt;
  border-top:none;mso-border-top-alt:solid windowtext .5pt;mso-border-alt:solid windowtext .5pt;
  padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal" style="mso-pagination:widow-orphan"><span lang="EN-US" style="color:black"><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width="277" valign="top" style="width:207.4pt;border-top:none;border-left:
  none;border-bottom:solid windowtext 1.0pt;border-right:solid windowtext 1.0pt;
  mso-border-top-alt:solid windowtext .5pt;mso-border-left-alt:solid windowtext .5pt;
  mso-border-alt:solid windowtext .5pt;padding:0cm 5.4pt 0cm 5.4pt">
  <p class="MsoNormal"><span lang="EN-US"><o:p>&nbsp;</o:p></span></p>
  </td>
 </tr>
</tbody></table>


# 來源 Sources
https://github.com/jvpernis/esp32-ps3
