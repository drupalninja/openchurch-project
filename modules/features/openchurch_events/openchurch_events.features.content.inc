<?php
/**
 * @file
 * openchurch_events.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openchurch_events_content_defaults() {
$content = array();
$content['oc_event1'] = (object)array(
  'title' => 'Scream Free Parenting',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_event',
  'language' => 'und',
  'created' => '1323218007',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'oc_event1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna.

Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna.</p>
<p>Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2012-12-07 00:30:00',
        'value2' => '2012-12-07 10:30:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_oc_url' => array(
    'und' => array(
      0 => array(
        'url' => 'http://google.com',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_oc_cost' => array(
    'und' => array(
      0 => array(
        'value' => 'FREE',
        'format' => NULL,
        'safe_value' => 'FREE',
      ),
    ),
  ),
  'field_oc_downloads' => array(
    'und' => array(
      0 => array(
        'display' => '1',
        'description' => '',
        'filename' => 'test_pdf.pdf',
        'uri' => 'public://test_pdf.pdf',
        'filemime' => 'application/pdf',
        'filesize' => '5935',
        'status' => '1',
        'type' => 'application',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'image' => '%PDF-1.4
%Ã¤Ã¼Ã¶ÃŸ
2 0 obj
<</Length 3 0 R/Filter/FlateDecode>>
stream
xœ3Ð3T(ç*T0PÐ5' . "\0" . '2Í€¤¹%ˆ,JU×RÈK‚`Q:—S—©™ž…‚¹‘	PAHŠ‚¾›¡‚¡‘BHZ´¡‘‘¡±®ˆâÅåÂÈ¨' . "\0" . '' . "\0" . 'xu#
endstream
endobj

3 0 obj
98
endobj

5 0 obj
<</Length 6 0 R/Filter/FlateDecode/Length1 6448>>
stream
xœåWPW~ÿ¾]I„‘°cËF+¯…Á cÀ!F€$ØAü#acKH’Nøì$5I&9Ÿl_Ü\\›ÄÛ\\f:\\ï:^ì¶CnÜ˜›iæ¦3MÒÎÍMš^|ÇLo¦ÔÔ®{Îtr±é÷=-ûœK{ÓÿºÒ¾ý|¾ï÷¤·ÙôŒÅ0<¸¢S‘TQq' . "\0" . 'ð÷' . "\0" . 'dct6+¬tœ3!^àÊÆSS5ÎŸý;' . "\0" . 'ÿ+€õÄäÉñçS·Ÿ(úy5q)+ÿ¯kJv¢½qdôÞ?Y€ô¤wÆ§²ßø‚|T„ôÒ†Éd4RMÊÒ.šŠ|#õ¶æ´
éKHÓ‘)ÉÚ }ék8ßT2“ÁÎ€
&O¥¥ÔÝ‘×µH£œË"à‡^Å5”æxø}©ÏC9øÔO‚Rl|èâ' . "\0" . '[èsåæÃãý+Ÿÿ_F¡Í?Þ€?ƒ¿„óð	Œ*/ø!3ÈYýþ¹ôòÃü9ä¾Äí`åy½0¼¿DÏ¯ÃUøñC³øa
žÁXþ
>!ðw¸T’p‡háyx½ÞAÞÁÇ¹âJpgp|÷gð&wz¹_"q‘J8g€¿…Kä(zÎbžç×2nû§ß„çp‚8Ì"f—úÉ/þ
Wþ³zzáè€Éu×È[<î#~ÞÂšþˆñ«ÂœûkŽ»÷$~&ðŽÌ;Ïw€[]êò„‚á¡ÁÿSôõöøº½wWg‡«}ÿ“mOìkmiÞÛÔPï°×ÙjvU[vŠ;Ì¦Ê²Rƒ¾dƒ®¨P[ Q«xŽ€Í#zÃ‚\\–UÕ¢ÏWGi1‚ŒÈ:FXå}XGÂLMxXÓ…šãhºòš®5MbÚ ­Î&xDAþÀ-
dd ˆø¼[	ò2ÃVU3bf3ZžÊ¸[IXðÈÞÙxÎv£¿y]Q—Ø%ÕÙ`¾H‡P‡H®Só¤f?a€«ñì›ç@»N+óO$&û‚·ÑlÕÙzäÑÍDÐÅ\\Êš.¹€¹4t8+ÌÛsç0¶ÇÄXäHPæ#h›ã=¹Ü7åR«\\+ºåÚS¿¬ÄÌ%Ù&º=²•zí\\›§ïÁ”DV[¢»˜Ž¸|óaNDáh,†»@¡Ë›ËyEÁ›ç"+sc¢`sóÅÅ¹”+þ Z-¬üð¬QöžÉ†pœìS’õöÉ›eÎââäà·]4·Í¥¡Uÿ—‰åÀššÍ4ñ³.CBžæiÆŒWÀå°†d.L%‹«’ò' . "\0" . '•Ì­JÖÌÃ"v³o(˜“U–ž˜èÁŸÈsc¸žŽÓVˆ¹ä3£YÌm,Z!¦+`T=±„ ««±,hµÞ' . "\0" . 'W
5ÉQòYþ±lÄ	ªK7
­"º¡~<¢\'¬|gã•è@¨³É>k¾õÃAÙåFàŠ(=òÌ×;Ð"Æ%Ü¬}²CLÉebçZ?iXžÄP™(frY—á¨b%;<n:³àÉ…Ýù¨/q ø.8W–æ÷Æ«NØ!7U®èÂuUíÉcã²)lŒáN‚F³ì
aƒCbP
Ñ…†ª]ÂéÌlF™ëö‰}#Á%¼€ºSY<¸ƒÆ¼\\r²Ö¢‚œ‘¡¢‚ØÙ†£\\`ÑâmÀ‚3.]ªmBaUÃkäVô(ýS5]N]¾UoJ¢Ÿ.ŸÑ2ç¯:‡bA™-´´¨¾UoÁ_äqè†±h-+éš‚¢$†Ä¸ »üAš-«²RVs¥WÃQëŠ…e3ŠW	ZLÙk5®/®ÜÍè5Ò÷ˆ¸gU,ä´bßPŽ:‡€‘÷È@—°«¥ÔÈv?ÝÏ¢7‚›w4ÛÏ¹y—‹îå8Ý¶9±\'–‡‚mLAž3ž¢sm„>Ò7ÜYgÃ³Îy‘œ˜w‘3C#Áwxœ:3¼Â®+Üšß‰²à»€‹q9Ê¥LJ” ž‘Ð2}ã».€9&U1££O»Ê#]àò<Ã*Cž*Ïs1½°K•q¬1þ~{„íÏ³¡x.¢k*°"ø%2÷cuÄýó„ÓËE¢Ô)ëÄNÊo§üö<_Cù¸2H©³Ê<âÝÊ:ö·nbê' . "\0" . 'ž~À>OÀÑv¥@¥]nœ×¨?m»Âsaž§l5e_)Ð~Ñv…P¾³Ô\\j1—šÝœp\'yã~\\øüûnÕ@O¡e+7¹:ÕóxºzÚÕÊµhK}*¹l$‹FÒnì7rE%Ý¼¿,\\Æ••' . "\0" . 'oàž×òªb¡«°ÄWX Ó——@´/;ÛZ—‰ãè¨Óé5,7ŽŽ¦êG­êÕM¥bS;q–;ËÅÒ²
gãÞæòž<>öÌsRûÇ?Qoé1éžè,KOpß©ÛõÓŸß;ÝÑY¤é(*Óåó÷¯Üä½üû`‚ÝuÕ}«Œ¼±‰è6ÝÄU«\\aå–ÊÚÊ‹•*mµÏ¤Ó™l`#ûçlßµÝ¶ñ¶…•Å«]½>útmÞm÷YˆïL©' . "\0" . '¿Å¢ü[šRšAûòÆVÇ2qŒ.7Z­_?:jø°ÑaXn¨?:J/R^VÅ9÷s4vq‡kÚ³×ÙXÅm\'dG	WnÞcçˆª¼==ZÕÙ¹ëæŽ§‚u3oÇl^ï{q¬õþë-M[È«¥VùdcÏËOªµEš½±bƒë÷~xò³;5Gÿdv\\rzæÀg±aìÍO0ç&xÛµ³·1×È=[~®œÛWÑ[qª"W¡RcE-N¾më­Ïn=·UÅ-¬ü“ksá_Uea±Ïâ2”û,–M^hšI3M¾¾Êìëo>Ö|¹™¯ónÓé¶mªSïö›÷T»«¹êj³ÁàWïÑ¹uªãÑéÔXl%ö²utck+q8±&£Ö¯~¾ìtXê­ÖQ`å)+áhUv597WlqÓ»¦iÏ~,YÅærq—ˆ;4XB÷“]Ã/u~jß†ºÓXç¨´Ûýôá§Ý»íCû…6Çî­#ÎÀnOðHÐ³›hÛ}µ:½Aý¯/n«4vØ¶WU·t¹bnqSñS›+ýnûµUB­ë°w*¢®zß½”;¦o»¦üyþÇï/<8’Ò•„;‰ö9……væûxzM‰<ròUq7ÁÍµBüüvFžßF?\' h«`¯âžqñ¼¯ÒiZqÇRé6rhÍ§kÍ?AM—‚9ÜÙ~ó`ÄXòX…:i«ñ}ñkðéÛ
.€SðÇ
ÖBÙ¬àB(!Vë0†Öµ·N;	(xœ&/*¸¬G#V"5ÇÕ)˜€Àý…‚9(á>P0{ñ"U ð¥
VC%ß `Tñ=
.€_ñ
ÖBê°‚a›êEë Eõ–‚‹áˆêco€ûj§‚Kà¦Á˜Hd§¤˜‹d#Â÷„Æúúf¡#•¦cRZèJ¦SÉt$›HNÛ…ŽÉI!˜ˆg3BZÊHéY)f?“òraHJ\'Æ¥‰™ÉHzÍAð¨Æ£ô!)¡Dƒ½¾ñìQÕDß,²éHLšŠ¤¿&$Ç…AŒÙÉÚ„žé¨šHd²R™‰i!`²þHVšÎ
‘é˜0¼fØ?>žˆJŒ•ÒÙ*\'³qôøL:‘‰%¢t¶ŒýqÊJ³’p0’ÍJ™ät<›Mís8Nœ8a(ÊQÔµG“SŽß&ËžLI1)“˜˜Æ¼íñìÔd #Ñ|²qÌq]ÆãI>“Ïžˆ¤%šffì¸Í
Ù$êJÂ$æ1¦‘‰´$MÑLgXÄ\'â‰h\\8™œ"Ñ¨”ÊbE¨ú—y¶ÿ¶`\'×ŒX¤øšÀÌdñ>Ä@À;‚tÑ÷ðn„zü4#ê€DQg5$Ü|tAŸ)6F˜$JíLw?ò©ÿ8Ê2Œ’ðImgÙ\\v8€ò1Æy`/à«´Ä,ÇaÑÌ ¯r~3‚:¼¿ÊÇWÉ1”Y“4`\\õ˜÷ãì¾Êk‚åIk—eç‹ýkÈK¢Àr¢uö1K¢´²º¥Y¾ÔK–ùÎk&˜ï' . "\0" . 'j1-?³¤uÈ²Ù¦™ÖðcfìÇÇÑžVíf”ù¦=Î{N"Ž+=ŽÕN³bÌn5·Îü?]C,ºY6çAÆÏ²ÎSYœQ)Ø‡8Á>vÔyØsTñkgh
5W»,œDZbò[ÓJ¿íÌç®­' . "\0" . '[•«ý¡µÈ÷ññ=gOZù³Èb$Ö«Õþg°†cXI‰ÕzL*~©Î¤ÒieÖÆD­ißV{:³®Æ\'X<QÌ%‰2je>R¬²±uÞÿ·1ÛçÊN>f¦5eÿ×ù“…]<æš/¿G
ð_´×‰Ê"K÷ÈG÷ˆpœþ5ñÿšÌÝ¹p‡ûÛµ¦Ë·¯ßæúo»uù_‹èo-,–ýËáåÔòw—5Eú›¤þ”þËR‹éÎŸ;?ÀÒæ¿1wC¾ÁÓƒÞÈ­Î{ƒðOù
“aQX¬_L-Î-þÃâÒâíEíÜ{ÞãþæšÃ¤¿fºÆ™®ö_=}•¿Côï˜Þáüo†ßä.\\"úK¦KŽKü]´›.vW™^m—iéµÛ¯qÔ}ÓkJ½Çþœ~õ•W¹ÔËs/_x™Ÿ{éÂKÜåÙë³\\Æ_kJN[MÓÝ»M[œ•\'Ðð+&jé³ÔxÃÇ\\¦c¨tx¤Þ4Ò]kÚäÜPc°*TÔó&¾ïç“ü+üu¾@;è¯2à½ä¿íçôý¦~G?f¸äŠô™ÑQoªw®—ïñÖš|Ý-&}·©ÛÑýQ÷/ºoukŽu“·ðë½ì½îå]ÞZ‡×å­2{·ùŒ
gyÀàÔ8â„€C¿¢çôúcúÓz^íÀÍU5Y æ‡‡¬Ö¾…‚•Á>Yë?,“3²eˆŽ®YsF†ÀÈáà<!ß½tþ<tnï“‡‚rx{¨OŽ!pQ0‡À°}¾:C™LÖJ/bµ"œÁ¬3È:šÉ3Áº*k†d2É+•1ˆÈX)›r¨AË£ •Z™E™LåÑÿÕSº§
endstream
endobj

6 0 obj
3792
endobj

7 0 obj
<</Type/FontDescriptor/FontName/BAAAAA+LiberationSerif
/Flags 4
/FontBBox[-176 -303 1005 981]/ItalicAngle 0
/Ascent 891
/Descent -216
/CapHeight 981
/StemV 80
/FontFile2 5 0 R>>
endobj

8 0 obj
<</Length 235/Filter/FlateDecode>>
stream
xœ]P»nÄ ìùŠ-/Å	lçÑXH§‹Nr‘‡âä0¬¤Æ…ÿ>¾$R
Ð3³–Ÿ»ÇÎÙÄ_£×=&­3¿F0àd«j0V§++·žU`œ²ý¶$œ;7ú¶eü´%Å\'ã¼aü%ŒÖMpø8÷Äû5„/œÑ%LJ08Òœ\'žÕŒ¼¤Ž!Ù¦íH‘?ÃûêÂ«½Šö— 4Få&d­ÚËE2tæŸÖì‰aÔŸ*’³"§·’p]ðý]ÆÍþÞ”Wwž–¿ûÓô#5,;)Õr)ëðwmÁ‡œ*çÞîr
endstream
endobj

9 0 obj
<</Type/Font/Subtype/TrueType/BaseFont/BAAAAA+LiberationSerif
/FirstChar 0
/LastChar 3
/Widths[365 277 443 389 ]
/FontDescriptor 7 0 R
/ToUnicode 8 0 R
>>
endobj

10 0 obj
<</F1 9 0 R
>>
endobj

11 0 obj
<</Font 10 0 R
/ProcSet[/PDF/Text]
>>
endobj

1 0 obj
<</Type/Page/Parent 4 0 R/Resources 11 0 R/MediaBox[0 0 612 792]/Group<</S/Transparency/CS/DeviceRGB/I true>>/Contents 2 0 R>>
endobj

4 0 obj
<</Type/Pages
/Resources 11 0 R
/MediaBox[ 0 0 612 792 ]
/Kids[ 1 0 R ]
/Count 1>>
endobj

12 0 obj
<</Type/Catalog/Pages 4 0 R
/OpenAction[1 0 R /XYZ null null 0]
/Lang(en-US)
>>
endobj

13 0 obj
<</Author<FEFF004A00610079002000430061006C006C00690063006F00740074>
/Creator<FEFF005700720069007400650072>
/Producer<FEFF004F00700065006E004F00660066006900630065002E006F0072006700200033002E0032>
/CreationDate(D:20100816201858-05\'00\')>>
endobj

xref
0 14
0000000000 65535 f 
0000004860 00000 n 
0000000019 00000 n 
0000000188 00000 n 
0000005003 00000 n 
0000000207 00000 n 
0000004083 00000 n 
0000004104 00000 n 
0000004298 00000 n 
0000004602 00000 n 
0000004773 00000 n 
0000004805 00000 n 
0000005102 00000 n 
0000005199 00000 n 
trailer
<</Size 14/Root 12 0 R
/Info 13 0 R
/ID [ <D2B6E4A117119511DC6897172CA32919>
<D2B6E4A117119511DC6897172CA32919> ]
/DocChecksum /B80E8A34B89E50088C9B19E171208A01
>>
startxref
5452
%%EOF
',
      ),
    ),
  ),
  'field_oc_ministry' => array(
    'und' => array(
      0 => array(
        'machine_name' => 'oc_ministry1',
      ),
    ),
  ),
  'field_oc_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'TX',
        'sub_administrative_area' => NULL,
        'locality' => 'Dallas',
        'dependent_locality' => NULL,
        'postal_code' => '75081',
        'thoroughfare' => '1949 Old Hickory Blvd.',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
);
$content['oc_event2'] = (object)array(
  'title' => 'Dinner at Bethlehem',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_event',
  'language' => 'und',
  'created' => '1323217798',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'oc_event2',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo.

In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo.</p>
<p>In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2012-12-07 05:30:00',
        'value2' => '2012-12-07 10:30:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_oc_url' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.google.com',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_oc_cost' => array(
    'und' => array(
      0 => array(
        'value' => '$8.00 - Per Attendee',
        'format' => NULL,
        'safe_value' => '$8.00 - Per Attendee',
      ),
    ),
  ),
  'field_oc_downloads' => array(
    'und' => array(
      0 => array(
        'display' => '1',
        'description' => '',
        'filename' => 'test_pdf.pdf',
        'uri' => 'public://test_pdf.pdf',
        'filemime' => 'application/pdf',
        'filesize' => '5935',
        'status' => '1',
        'type' => 'application',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'image' => '%PDF-1.4
%Ã¤Ã¼Ã¶ÃŸ
2 0 obj
<</Length 3 0 R/Filter/FlateDecode>>
stream
xœ3Ð3T(ç*T0PÐ5' . "\0" . '2Í€¤¹%ˆ,JU×RÈK‚`Q:—S—©™ž…‚¹‘	PAHŠ‚¾›¡‚¡‘BHZ´¡‘‘¡±®ˆâÅåÂÈ¨' . "\0" . '' . "\0" . 'xu#
endstream
endobj

3 0 obj
98
endobj

5 0 obj
<</Length 6 0 R/Filter/FlateDecode/Length1 6448>>
stream
xœåWPW~ÿ¾]I„‘°cËF+¯…Á cÀ!F€$ØAü#acKH’Nøì$5I&9Ÿl_Ü\\›ÄÛ\\f:\\ï:^ì¶CnÜ˜›iæ¦3MÒÎÍMš^|ÇLo¦ÔÔ®{Îtr±é÷=-ûœK{ÓÿºÒ¾ý|¾ï÷¤·ÙôŒÅ0<¸¢S‘TQq' . "\0" . 'ð÷' . "\0" . 'dct6+¬tœ3!^àÊÆSS5ÎŸý;' . "\0" . 'ÿ+€õÄäÉñçS·Ÿ(úy5q)+ÿ¯kJv¢½qdôÞ?Y€ô¤wÆ§²ßø‚|T„ôÒ†Éd4RMÊÒ.šŠ|#õ¶æ´
éKHÓ‘)ÉÚ }ék8ßT2“ÁÎ€
&O¥¥ÔÝ‘×µH£œË"à‡^Å5”æxø}©ÏC9øÔO‚Rl|èâ' . "\0" . '[èsåæÃãý+Ÿÿ_F¡Í?Þ€?ƒ¿„óð	Œ*/ø!3ÈYýþ¹ôòÃü9ä¾Äí`åy½0¼¿DÏ¯ÃUøñC³øa
žÁXþ
>!ðw¸T’p‡háyx½ÞAÞÁÇ¹âJpgp|÷gð&wz¹_"q‘J8g€¿…Kä(zÎbžç×2nû§ß„çp‚8Ì"f—úÉ/þ
Wþ³zzáè€Éu×È[<î#~ÞÂšþˆñ«ÂœûkŽ»÷$~&ðŽÌ;Ïw€[]êò„‚á¡ÁÿSôõöøº½wWg‡«}ÿ“mOìkmiÞÛÔPï°×ÙjvU[vŠ;Ì¦Ê²Rƒ¾dƒ®¨P[ Q«xŽ€Í#zÃ‚\\–UÕ¢ÏWGi1‚ŒÈ:FXå}XGÂLMxXÓ…šãhºòš®5MbÚ ­Î&xDAþÀ-
dd ˆø¼[	ò2ÃVU3bf3ZžÊ¸[IXðÈÞÙxÎv£¿y]Q—Ø%ÕÙ`¾H‡P‡H®Só¤f?a€«ñì›ç@»N+óO$&û‚·ÑlÕÙzäÑÍDÐÅ\\Êš.¹€¹4t8+ÌÛsç0¶ÇÄXäHPæ#h›ã=¹Ü7åR«\\+ºåÚS¿¬ÄÌ%Ù&º=²•zí\\›§ïÁ”DV[¢»˜Ž¸|óaNDáh,†»@¡Ë›ËyEÁ›ç"+sc¢`sóÅÅ¹”+þ Z-¬üð¬QöžÉ†pœìS’õöÉ›eÎââäà·]4·Í¥¡Uÿ—‰åÀššÍ4ñ³.CBžæiÆŒWÀå°†d.L%‹«’ò' . "\0" . '•Ì­JÖÌÃ"v³o(˜“U–ž˜èÁŸÈsc¸žŽÓVˆ¹ä3£YÌm,Z!¦+`T=±„ ««±,hµÞ' . "\0" . 'W
5ÉQòYþ±lÄ	ªK7
­"º¡~<¢\'¬|gã•è@¨³É>k¾õÃAÙåFàŠ(=òÌ×;Ð"Æ%Ü¬}²CLÉebçZ?iXžÄP™(frY—á¨b%;<n:³àÉ…Ýù¨/q ø.8W–æ÷Æ«NØ!7U®èÂuUíÉcã²)lŒáN‚F³ì
aƒCbP
Ñ…†ª]ÂéÌlF™ëö‰}#Á%¼€ºSY<¸ƒÆ¼\\r²Ö¢‚œ‘¡¢‚ØÙ†£\\`ÑâmÀ‚3.]ªmBaUÃkäVô(ýS5]N]¾UoJ¢Ÿ.ŸÑ2ç¯:‡bA™-´´¨¾UoÁ_äqè†±h-+éš‚¢$†Ä¸ »üAš-«²RVs¥WÃQëŠ…e3ŠW	ZLÙk5®/®ÜÍè5Ò÷ˆ¸gU,ä´bßPŽ:‡€‘÷È@—°«¥ÔÈv?ÝÏ¢7‚›w4ÛÏ¹y—‹îå8Ý¶9±\'–‡‚mLAž3ž¢sm„>Ò7ÜYgÃ³Îy‘œ˜w‘3C#Áwxœ:3¼Â®+Üšß‰²à»€‹q9Ê¥LJ” ž‘Ð2}ã».€9&U1££O»Ê#]àò<Ã*Cž*Ïs1½°K•q¬1þ~{„íÏ³¡x.¢k*°"ø%2÷cuÄýó„ÓËE¢Ô)ëÄNÊo§üö<_Cù¸2H©³Ê<âÝÊ:ö·nbê' . "\0" . 'ž~À>OÀÑv¥@¥]nœ×¨?m»Âsaž§l5e_)Ð~Ñv…P¾³Ô\\j1—šÝœp\'yã~\\øüûnÕ@O¡e+7¹:ÕóxºzÚÕÊµhK}*¹l$‹FÒnì7rE%Ý¼¿,\\Æ••' . "\0" . 'oàž×òªb¡«°ÄWX Ó——@´/;ÛZ—‰ãè¨Óé5,7ŽŽ¦êG­êÕM¥bS;q–;ËÅÒ²
gãÞæòž<>öÌsRûÇ?Qoé1éžè,KOpß©ÛõÓŸß;ÝÑY¤é(*Óåó÷¯Üä½üû`‚ÝuÕ}«Œ¼±‰è6ÝÄU«\\aå–ÊÚÊ‹•*mµÏ¤Ó™l`#ûçlßµÝ¶ñ¶…•Å«]½>útmÞm÷YˆïL©' . "\0" . '¿Å¢ü[šRšAûòÆVÇ2qŒ.7Z­_?:jø°ÑaXn¨?:J/R^VÅ9÷s4vq‡kÚ³×ÙXÅm\'dG	WnÞcçˆª¼==ZÕÙ¹ëæŽ§‚u3oÇl^ï{q¬õþë-M[È«¥VùdcÏËOªµEš½±bƒë÷~xò³;5Gÿdv\\rzæÀg±aìÍO0ç&xÛµ³·1×È=[~®œÛWÑ[qª"W¡RcE-N¾më­Ïn=·UÅ-¬ü“ksá_Uea±Ïâ2”û,–M^hšI3M¾¾Êìëo>Ö|¹™¯ónÓé¶mªSïö›÷T»«¹êj³ÁàWïÑ¹uªãÑéÔXl%ö²utck+q8±&£Ö¯~¾ìtXê­ÖQ`å)+áhUv597WlqÓ»¦iÏ~,YÅærq—ˆ;4XB÷“]Ã/u~jß†ºÓXç¨´Ûýôá§Ý»íCû…6Çî­#ÎÀnOðHÐ³›hÛ}µ:½Aý¯/n«4vØ¶WU·t¹bnqSñS›+ýnûµUB­ë°w*¢®zß½”;¦o»¦üyþÇï/<8’Ò•„;‰ö9……væûxzM‰<ròUq7ÁÍµBüüvFžßF?\' h«`¯âžqñ¼¯ÒiZqÇRé6rhÍ§kÍ?AM—‚9ÜÙ~ó`ÄXòX…:i«ñ}ñkðéÛ
.€SðÇ
ÖBÙ¬àB(!Vë0†Öµ·N;	(xœ&/*¸¬G#V"5ÇÕ)˜€Àý…‚9(á>P0{ñ"U ð¥
VC%ß `Tñ=
.€_ñ
ÖBê°‚a›êEë Eõ–‚‹áˆêco€ûj§‚Kà¦Á˜Hd§¤˜‹d#Â÷„Æúúf¡#•¦cRZèJ¦SÉt$›HNÛ…ŽÉI!˜ˆg3BZÊHéY)f?“òraHJ\'Æ¥‰™ÉHzÍAð¨Æ£ô!)¡Dƒ½¾ñìQÕDß,²éHLšŠ¤¿&$Ç…AŒÙÉÚ„žé¨šHd²R™‰i!`²þHVšÎ
‘é˜0¼fØ?>žˆJŒ•ÒÙ*\'³qôøL:‘‰%¢t¶ŒýqÊJ³’p0’ÍJ™ät<›Mís8Nœ8a(ÊQÔµG“SŽß&ËžLI1)“˜˜Æ¼íñìÔd #Ñ|²qÌq]ÆãI>“Ïžˆ¤%šffì¸Í
Ù$êJÂ$æ1¦‘‰´$MÑLgXÄ\'â‰h\\8™œ"Ñ¨”ÊbE¨ú—y¶ÿ¶`\'×ŒX¤øšÀÌdñ>Ä@À;‚tÑ÷ðn„zü4#ê€DQg5$Ü|tAŸ)6F˜$JíLw?ò©ÿ8Ê2Œ’ðImgÙ\\v8€ò1Æy`/à«´Ä,ÇaÑÌ ¯r~3‚:¼¿ÊÇWÉ1”Y“4`\\õ˜÷ãì¾Êk‚åIk—eç‹ýkÈK¢Àr¢uö1K¢´²º¥Y¾ÔK–ùÎk&˜ï' . "\0" . 'j1-?³¤uÈ²Ù¦™ÖðcfìÇÇÑžVíf”ù¦=Î{N"Ž+=ŽÕN³bÌn5·Îü?]C,ºY6çAÆÏ²ÎSYœQ)Ø‡8Á>vÔyØsTñkgh
5W»,œDZbò[ÓJ¿íÌç®­' . "\0" . '[•«ý¡µÈ÷ññ=gOZù³Èb$Ö«Õþg°†cXI‰ÕzL*~©Î¤ÒieÖÆD­ißV{:³®Æ\'X<QÌ%‰2je>R¬²±uÞÿ·1ÛçÊN>f¦5eÿ×ù“…]<æš/¿G
ð_´×‰Ê"K÷ÈG÷ˆpœþ5ñÿšÌÝ¹p‡ûÛµ¦Ë·¯ßæúo»uù_‹èo-,–ýËáåÔòw—5Eú›¤þ”þËR‹éÎŸ;?ÀÒæ¿1wC¾ÁÓƒÞÈ­Î{ƒðOù
“aQX¬_L-Î-þÃâÒâíEíÜ{ÞãþæšÃ¤¿fºÆ™®ö_=}•¿Côï˜Þáüo†ßä.\\"úK¦KŽKü]´›.vW™^m—iéµÛ¯qÔ}ÓkJ½Çþœ~õ•W¹ÔËs/_x™Ÿ{éÂKÜåÙë³\\Æ_kJN[MÓÝ»M[œ•\'Ðð+&jé³ÔxÃÇ\\¦c¨tx¤Þ4Ò]kÚäÜPc°*TÔó&¾ïç“ü+üu¾@;è¯2à½ä¿íçôý¦~G?f¸äŠô™ÑQoªw®—ïñÖš|Ý-&}·©ÛÑýQ÷/ºoukŽu“·ðë½ì½îå]ÞZ‡×å­2{·ùŒ
gyÀàÔ8â„€C¿¢çôúcúÓz^íÀÍU5Y æ‡‡¬Ö¾…‚•Á>Yë?,“3²eˆŽ®YsF†ÀÈáà<!ß½tþ<tnï“‡‚rx{¨OŽ!pQ0‡À°}¾:C™LÖJ/bµ"œÁ¬3È:šÉ3Áº*k†d2É+•1ˆÈX)›r¨AË£ •Z™E™LåÑÿÕSº§
endstream
endobj

6 0 obj
3792
endobj

7 0 obj
<</Type/FontDescriptor/FontName/BAAAAA+LiberationSerif
/Flags 4
/FontBBox[-176 -303 1005 981]/ItalicAngle 0
/Ascent 891
/Descent -216
/CapHeight 981
/StemV 80
/FontFile2 5 0 R>>
endobj

8 0 obj
<</Length 235/Filter/FlateDecode>>
stream
xœ]P»nÄ ìùŠ-/Å	lçÑXH§‹Nr‘‡âä0¬¤Æ…ÿ>¾$R
Ð3³–Ÿ»ÇÎÙÄ_£×=&­3¿F0àd«j0V§++·žU`œ²ý¶$œ;7ú¶eü´%Å\'ã¼aü%ŒÖMpø8÷Äû5„/œÑ%LJ08Òœ\'žÕŒ¼¤Ž!Ù¦íH‘?ÃûêÂ«½Šö— 4Få&d­ÚËE2tæŸÖì‰aÔŸ*’³"§·’p]ðý]ÆÍþÞ”Wwž–¿ûÓô#5,;)Õr)ëðwmÁ‡œ*çÞîr
endstream
endobj

9 0 obj
<</Type/Font/Subtype/TrueType/BaseFont/BAAAAA+LiberationSerif
/FirstChar 0
/LastChar 3
/Widths[365 277 443 389 ]
/FontDescriptor 7 0 R
/ToUnicode 8 0 R
>>
endobj

10 0 obj
<</F1 9 0 R
>>
endobj

11 0 obj
<</Font 10 0 R
/ProcSet[/PDF/Text]
>>
endobj

1 0 obj
<</Type/Page/Parent 4 0 R/Resources 11 0 R/MediaBox[0 0 612 792]/Group<</S/Transparency/CS/DeviceRGB/I true>>/Contents 2 0 R>>
endobj

4 0 obj
<</Type/Pages
/Resources 11 0 R
/MediaBox[ 0 0 612 792 ]
/Kids[ 1 0 R ]
/Count 1>>
endobj

12 0 obj
<</Type/Catalog/Pages 4 0 R
/OpenAction[1 0 R /XYZ null null 0]
/Lang(en-US)
>>
endobj

13 0 obj
<</Author<FEFF004A00610079002000430061006C006C00690063006F00740074>
/Creator<FEFF005700720069007400650072>
/Producer<FEFF004F00700065006E004F00660066006900630065002E006F0072006700200033002E0032>
/CreationDate(D:20100816201858-05\'00\')>>
endobj

xref
0 14
0000000000 65535 f 
0000004860 00000 n 
0000000019 00000 n 
0000000188 00000 n 
0000005003 00000 n 
0000000207 00000 n 
0000004083 00000 n 
0000004104 00000 n 
0000004298 00000 n 
0000004602 00000 n 
0000004773 00000 n 
0000004805 00000 n 
0000005102 00000 n 
0000005199 00000 n 
trailer
<</Size 14/Root 12 0 R
/Info 13 0 R
/ID [ <D2B6E4A117119511DC6897172CA32919>
<D2B6E4A117119511DC6897172CA32919> ]
/DocChecksum /B80E8A34B89E50088C9B19E171208A01
>>
startxref
5452
%%EOF
',
      ),
    ),
  ),
  'field_oc_ministry' => array(
    'und' => array(
      0 => array(
        'machine_name' => 'oc_ministry1',
      ),
    ),
  ),
  'field_oc_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'OH',
        'sub_administrative_area' => NULL,
        'locality' => 'Cleveland',
        'dependent_locality' => NULL,
        'postal_code' => '37027',
        'thoroughfare' => '',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
);
return $content;
}
