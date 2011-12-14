<?php
/**
 * @file
 * openchurch_giving.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openchurch_giving_content_defaults() {
$content = array();
$content['oc_charity1'] = (object)array(
  'title' => 'Support our Food Pantry',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_charity',
  'language' => 'und',
  'created' => '1323217456',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'oc_charity1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.

Fusce ac elit diam, lobortis semper magna. Duis pulvinar, purus eu porttitor interdum, sem tortor molestie justo, sed porttitor tortor ligula in quam. Fusce non convallis lectus. Aenean eleifend quam quis metus hendrerit ut pellentesque sem ultrices. Aliquam neque velit, ultricies vitae dignissim nec, feugiat sed augue. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec mattis nibh ullamcorper turpis aliquet sed blandit lacus dictum. Morbi at lectus erat. Aliquam erat volutpat. Praesent ut enim aliquet odio venenatis vulputate. Mauris pellentesque mollis luctus. Vestibulum tempor diam ac sem fringilla varius.

Donec ac est massa. Etiam cursus, justo sed bibendum tincidunt, diam leo faucibus est, sed egestas justo nisi sed tellus. Donec vitae tellus velit, ac pellentesque sem. Suspendisse vehicula ultricies augue, at lacinia orci ultrices vel. Nam fringilla eros ac odio pellentesque et convallis tortor cursus. Vivamus vel eros in dui mattis sollicitudin. Curabitur gravida porta justo, in dignissim tortor mattis venenatis. Aenean sit amet purus urna. Integer elementum eleifend justo, sed suscipit urna molestie eu. Suspendisse iaculis sagittis convallis. Maecenas dapibus arcu purus, vitae ultrices odio. Donec interdum tincidunt libero, commodo vehicula dolor pharetra quis. Cras ullamcorper ultrices lectus, a gravida erat commodo adipiscing. Donec nec blandit tortor. In congue dignissim erat eu aliquam.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
<p>Fusce ac elit diam, lobortis semper magna. Duis pulvinar, purus eu porttitor interdum, sem tortor molestie justo, sed porttitor tortor ligula in quam. Fusce non convallis lectus. Aenean eleifend quam quis metus hendrerit ut pellentesque sem ultrices. Aliquam neque velit, ultricies vitae dignissim nec, feugiat sed augue. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec mattis nibh ullamcorper turpis aliquet sed blandit lacus dictum. Morbi at lectus erat. Aliquam erat volutpat. Praesent ut enim aliquet odio venenatis vulputate. Mauris pellentesque mollis luctus. Vestibulum tempor diam ac sem fringilla varius.</p>
<p>Donec ac est massa. Etiam cursus, justo sed bibendum tincidunt, diam leo faucibus est, sed egestas justo nisi sed tellus. Donec vitae tellus velit, ac pellentesque sem. Suspendisse vehicula ultricies augue, at lacinia orci ultrices vel. Nam fringilla eros ac odio pellentesque et convallis tortor cursus. Vivamus vel eros in dui mattis sollicitudin. Curabitur gravida porta justo, in dignissim tortor mattis venenatis. Aenean sit amet purus urna. Integer elementum eleifend justo, sed suscipit urna molestie eu. Suspendisse iaculis sagittis convallis. Maecenas dapibus arcu purus, vitae ultrices odio. Donec interdum tincidunt libero, commodo vehicula dolor pharetra quis. Cras ullamcorper ultrices lectus, a gravida erat commodo adipiscing. Donec nec blandit tortor. In congue dignissim erat eu aliquam.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_image' => array(
    'und' => array(
      0 => array(
        'alt' => '',
        'title' => '',
        'width' => '220',
        'height' => '110',
        'filename' => 'food_pantry.jpg',
        'uri' => 'public://food_pantry.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '8626',
        'status' => '1',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'image' => 'ÿØÿà' . "\0" . 'JFIF' . "\0" . '' . "\0" . '' . "\0" . 'd' . "\0" . 'd' . "\0" . '' . "\0" . 'ÿì' . "\0" . 'Ducky' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '<' . "\0" . '' . "\0" . 'ÿî' . "\0" . 'Adobe' . "\0" . 'dÀ' . "\0" . '' . "\0" . '' . "\0" . 'ÿÛ' . "\0" . '„' . "\0" . '		



ÿÀ' . "\0" . '' . "\0" . 'n' . "\0" . 'Ü' . "\0" . 'ÿÄ' . "\0" . 'š' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '!1AQ"aq2#‘¡±BRğÁÑb‚3$rCá’¢' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '!1AQaq"ğ3‘¡±Á2ÑñBCÿÚ' . "\0" . '' . "\0" . '' . "\0" . '?' . "\0" . 'ç­rš' . "\0" . 'Í' . "\0" . 'f€3@ Ğh4š' . "\0" . 'Í' . "\0" . 'f€2£H®€=ĞPèÚ' . "\0" . 'fÓ 6èÊi€›4±ñ;z¢ğÖ-š¤LCkÃ–¢Jf¶áËJGy`øh‚>æ:uH›ß½¦dFëa ĞhÊè+ ®€=ĞSH¦€= Ğ )¦¢š@l)] 6m' . "\0" . 'bñĞÃ@i¡Ğ2:¤Zñœh¶ÃA6!±uÌÙºDÜ1
j$¨ûzøiHàBk^´HAnB]YD&ÃÔÓ“Ÿ©[¸@É,oŞæ¯ZÖÔ¢tâyçVÛPÄ*ò9' . "\0" . '£à4' . "\0" . 'ã-Úmgƒ»l­ş9®ÓtUJÈÒQ£–8È' . "\0" . '\'?ˆ§êè+¦¤Êt•«heVwTQVb2t' . "\0" . 'ç!¼Ç_Mc{†îİ¶M •o*‚F˜è@xt°4á:' . "\0" . 'Üñ] <Œè`y!¦šÅâ4©<ôÀBFãª@)]×#ç¥}Š®å‰²•Õh8S\\vgBA¾-è*5%Æ1©ËHf²c	^ZR&JÀŠ­9é«tCÿ' . "\0" . '\'mõ¦—=NxÔXõÚn":R/c]f1w·™kxîá²¶c‘´–¤Kk#ªH´' . "\0" . 'ò¨\'Ê•ÓL	ìŠvüı»qöìMH2P.Cs¶âÙ¥ÚÁ$A `h²0ùx
Pnííãîp±ßgn¶pcîn`^„`Ç"ô‚ßnå\\ĞOP†·¹»Ìfö^BËe5íïß%İl­ÜÍ½ÂÄ‘ŸËà
p$q>z' . "\0" . '†ÿ' . "\0" . 'mˆŸ¾­±¶6¯oj-.1¢h!”C,ûz¡LŠŞ•ğSU\\ô›á»Oÿ' . "\0" . '¬e²öŒ‚óï-ácŠğÛTÄÎˆkQêáêåËBrAEŒ¾Êö–ró%»äq“ZÏ‰¹Š£Úd«ÀÊªG´pVO-ˆÿ' . "\0" . '»ò™<^n+,nêŞÊVºû8D–•‘–ªSÔŞ+@9PñÓvH!ƒ>ìO•¸ï„SÂ>ÚÚwîF„«…®çEW“—äé;)^\\ÿ' . "\0" . ' ±í1v–òÇ”n2,Ì×RI.×…ÙÕÔ«N~z¤!ïpã±¶8Îû±²¶€ÛâolÉúQ´‘uä=DêX¨eF?' . "\0" . '9¶17|öVûKZdñ6Æú#mF‘å,ı=›UÑÅ@?† w.}²miö6–‚ÁçHäµˆDÒ+½Ud§Õ°
/2jMt›†>)e›íÖ6v“ÒT
‘_gpDş;Û¬¼íºY/Şj|´¾IèZ¡;ií”) ynZEÚA]¢œ|u.Í‚´ö³‡óe–QäM?`ÑÊÌ¥D>>×öãŠt¤_ˆs£•¼C‚Üû7‡•IŠæx>$†¬iü–@è†–>ÑOguÔín£€Û´şİ+el+D‚Û,Û€¥hGs›1ØÓ…9iŒ[íh9iHÑ«ÚŠVš–ÆBel×ui¥$\\eökJøë.G<¢A¯NB’ßá¥!®!–ÅÌòc\'h&™DnPYw¶„Z9@AhwEÆ´ä³í¼şß¸fk/¹Ê~ĞEyr*«
À«ôÔ
¾Íí^c–¹•­“TãQ$Wkš÷
I‡#*Ã4o4­DK*HÅ?0ĞP©×ZÈBøï`³íl>3vu33Dm÷’óKÔH‡k&ãÄSTŞ‚^İ»K;<¸½»0ä2ULÑ<¤K3H
°!·S’chaîY¯íò$uÄ«D›vÄŠ¦¡vÇ°*ü©¨³ë­¦Âã­í¢³•mR÷!
&º›ä5­6«Ï\\ı½ÛM·Ô¯\'ÈdY$»~«D(¯±Tà* yp×Kr4…ò‘ÈŞıŒ¢‡dU¯!Ì»I¹ i5il„8yÌÂZKAÒ^œõ4}Ds>%)¤¬Ğ4™X[g;›}{²w†êçtwâeY„¦»›zÊ\\Õ«SÇZ«NÆM@÷şïŞ{m+^I-ıd¶wŠ7–0xµ7!jğÑ 7Ãc³=áİ–¶Qù•ÄhóTUÜB™c
' . "\0" . 'Ï?=FKªÕ¶	Io/bÁÛ·÷6' . "\0" . '­İÔLc–é…Ùx\'×5\\©6ª„(&·Enl©A&Å$©<§-*	$–Óòƒ‘ÓF©òÖ“ ÄúĞF¤Ì¨+¸)§é4Ëå@™{ÜL\'0YËk ¬³É bŒ|6ğ¼k©¶wĞ—a‡óë[kìªİõ8À}ZŸ$DàÇY«Z|EÊ	lOrK’¢ZO@ŞİTØÁG?@?ßªY­´ÁU´“ÓZ¼¶8˜;ÓÒÈ´…8ê­­fKƒ-ágŠHzŠÛAÑô60/~mš¡»¢º’?Ûğ?Åãú5-¬üëç¡“bïİgœ³¨:ôd¨Go¢G—µpäO~aà°¸’ÙçVá¢b¬Ğ)êL„D:Ç3\\\\ƒE‘ipıÛîpÉ™KÎØíÖò,[±hí†?G*¹¹|ùëû(£ı2z{ešÍwqd Î\\µÆæÊf»±rM´q¡V(ø¬a7pÛ«ÍEJ¦·hjmÇjv:ïz9¼û»I~¼%ŠÚ?ıq05MÕRHøü5¤óÈÓÿ' . "\0" . '5&%Ã¿röh®NG“+w|öâñıS@Ò%©¶…ZWY«ğ½£hıÀÖ\\EıÁ³íü$ÃãîÒÚ;;s±
Äi;Èû…¨Õİ_Û¡U|nÖÕ´8Ğ€÷s’ï,À;•%è\'•!>2µÖØQ¨&ì«ËËËÏÏ)Y,áDŠÖŞDV«+IR=\\Yyë,ÕNõ]D÷ÇÜßåû5üâCt –/±’@,¤JÄ
¥jªäPjyÜ‘ÍÛÉg€Ã»[8‰%¾¹„ì–iœšëêÚ)ÀWU…+Í¬÷¾×¹¤ï.Ö8;§‹\'`!²3 Ä÷®ªÒŠƒÄÕju=¼qs³%×I7Ëw–zïú‘¶íü‘ÙÚ$ğÇ”’ItÀ&g‚ìC"ŠĞs¼t«,2É&=­°…{ï¹»†Ô˜,oîîîc$$E#$l@ç¸±“æt²ş4Ÿ’4ˆCşÑî\\¶W¼íí›!#i%Û•b
Z”§
£*ª®ˆPİ{•’†<Íµ­º~Zgk	á‰L0~a;èµÒTÏãğ Ö|HcÏsì3¹+~×Ä½ã}ìvho.ì’I®
¨V
	)åã¥G¸@/ï´öÉİ‚ÊïïbÅb¬­ìáš²A]»ıkZ†õÒ¿^ÚÓrXo„Æ_ØL17Bîâ÷ØZ%˜­¼9êİšz¨¬S3kf“C’DÆ9=Hî"Ô|HwQOş:Vié‚ØİÜ}´×VvØËÌ|’t¾ã"%àmµÚa–¡Õ"ºV¢e?1„Ò¤ImÖç¯kkÑ[4]’ŠB›j­¸-é¨ÖORºÁ+Rİ¤w¨ ¡’EePƒÆAõ)ø2óÓÕ=M6ÔTµôè\'–¶„lc½Èäe­‹ä†„ş÷–´M³ZKÜi”A¡áñ?ßª73YTï¦Z¥çËa.—§w…5”êrH5ªi®æt"B[* «1¢âN¥Œµ;“ìŒÖG¸{Í¬cÃY¹¶"k«…Q²–W,¬ÕÚxxë›%•ÒK©/PW±{Öï	›š^’ŞEŠK{ûi	Q,rqoPúZ¾:×&>H¨Å3Öö¸«œ~Àã’ÿ' . "\0" . '…ìÒLn&xøÒ%}‘N<xTøRÆÛ›9‚`]sö—L>c×ÑX3)£˜Á"+š²7¢PÀü´­òm8‘ªˆÍŞY»‡4Q%¼X¥Saf€ô¢‰Hxñ%©ê<Î¥cP×‰§Æ Ÿ¼ì-óÃ5g„Š+Ù]åg±qFéÔ$ÔšÛ©x_-‘ÃB -ï²=½ ´IIvˆ;IÄ’I,ß=mDÒ€ˆAªÛÛã;ÖÚîÑ§\\”í,¨ÄË¶Hm­à£˜Ö.m•ÃØ¤5õü—Pã­¡˜øXÈ°),ZCûò9¦ã­«½YI·=ÅÜÖ÷·Øß\'ª›–v(Ûy' . "\0" . 'WñÖuÂÖ“ *‰^æ ¹ÎA™\\zõáa#©‘ˆwE8‘EÚ@<—Åã%*èWouÛ¾âd{ã#qåÕü×l¶Q…2õJG¢…µ\\‰ÑTÁ¨avº­ñW–ğbU1³Û‹o¶H¡ª«JC39ĞS•5›iK)ÈÂÇ¹q}·¸ÖÑa—\'[,;İº
ÔêÌš<iVáÃJA‰ÅöªÌ‘âí”IpÒ³Ú•P–VÛN>ƒñRxxéZİDÃ¾Ùî¼ŞHå»#+ÛÎğç.$20%:B«2~¾Aút²UWg –Å{‘î,ŞK1~×8{kÈî¤¸hÌ²†¬ÛÅº¤éVü4ôA ı´½¡ÊGtØõÃ\\¤›­gk‰b¤#ı™÷XÃ¡·ã­;(ZŠ2]­­lÖO
´QŞEpÁdU†J‚
 £*:•ßaÊº•ŠÑ(Q-gcÛÓö|ÓAmi™´¢İô¢DjÜÇH¥
­N=&ÃRíj¸–Ÿğ8ĞqyJ^à¶6rFã­u‘¸€"CÜ¥´\'òàP } Ÿ¦§†„½²õûbêaÀy!¸ÅòL
7ÈÀ†vVÔ«ı5cAñÕS£Üé¥%&õo»’êÂúáÙÎv$MWÔ+âxUk­UdØÏwp,Á^¬ÄÔüNº1â"ù»{™ŞğLÄĞ^D ä½¤.ë²ßğ×™_Á‘¥8ëÓu7Lƒ*<õ…I\'‘î¼Ec÷óİˆ…"ÊòìK¼š~…-€×·/„İÃcâ^B)çé\'NÕ„4õ-è­hƒ‡iIPjtØPüu‹ã ÚŞxşúàT‘…ˆ(âÄı\\¿O"İt&-,Ê/ZëÒíôÅÌŸÇT¼Y6ğDµœ¨Â_¦BAR8§.#ÇZ$fÉY.òÓ¡ŠkÉå‡ª7‘ÙMx‚i¤±Õ9I	j«Ry9*É˜WÏÏRQ‘…w¨n¤€ƒV
yªıDüu†FãDÍe’›&	ÖéJ*œhw¡¡P"±Ó~¤ÂP÷õ%\'é)2†Ü0yX€w(Œ`T—¡¢üOÃY·,Íêõê#iI0—+tÔÛ°UW†Ş<6§!çÄëZÕñ“JÒh¥ËÚ_”ª’HğºÚREC#ÉŒ' . "\0" . 'MãpÕhÄñ=ĞBç}=ÜÙ2ĞB#¶ïoZXÓqe=9$VŞµ z±§Z=ş[ÎÈ‹b²İq²c²é{-µ´Wñ@ïæ,ñ»IBb‚U¸·Š9¨H· U‰¦³tj\'I"<†¸Œ?!w=­´îcœ™)qY5i*bû˜LÈèvÕCHX
rÖ‘¬ÿ' . "\0" . '˜è›$.½¢Ã-ÕÛÉfİú‰k²-‡Œ ¡‘
+Šî¡xøkO™¥¹µ«MÊÓ/oKØãædkŒ£H\'¸UÅÇÜL@Hv†Vß¢Wp¦²Égio¯Øæ½8è7¶´Åd’÷g÷¶7Á%õã1ß\\:‡Ë¼»×k"Bj£‰æN­Y¤›Ô×4Ò¡?oö}´1GåÄŠÛ\'=åB¯Ô¬vmO/ÆšÍ¤Ù¿ÃG¢õ¿¨×›	±î[Fškk—™.K$ÅKBüAàê¬§â9ëĞík.>æy½¥
·‰qt„İ„«Y‘ÖŸcêk¹Öß_s‘°ÅÃÀ¤~‘ãñã®¨d“ÿ' . "\0" . 'p–í®¹£Q³»ÆÔğ×®‹LÁtÃÇGÉïßIÊ§G›Û#÷=ñWj20dFÛGéÖYÔT¼zØèƒm@6ó¯\\­)÷(kÄràˆ?á¬›6¥E»~ÁI4Q…išIiÅ.†Y7	`ÇÛDw·×âÍÏZ¨F.Xªõ§4QSŒ¯õä«ş:\\Û ö+p84æO=9-˜§RO=Ku¥pÓBé¤á' . "\0" . '/¤y¬Û4J™í¶sJÈÈÓÙ–gz‘²ÑÕj86³µMaI£^Ä“ÄM§ÒŠ¢ŸCnfñİJòÖŒxgõq%É©${@¨yùÒ¼uÓKi’ºŒ.Í–-]îBG?”ò0ò¿§XZÊ¤»@+Ÿïk°|KŞ¹Sµ--e½cN@(?W›1âuëh’_s7{ú×½Ç‘alffK[DXàèÚÂ–æ¾§*ÄIÛ¸\'ªššÖVèÊ´•¼¬çîVhàKk¿·ŒşzŞ^…à8XàX"\\Tèj©=T›|i/ô˜si>3í.c  E(Bì|vô‹»ù¥dÔÒşô»‡³ò²G4¶÷9+	bØØö"9:dƒDêĞúXU¯4øH¯‰Yi§‘_Ø¬÷7VV/0÷‚æy$&Ş8­4½K‰&!#Ù+H=lPê¸ÂOÇùÿ' . "\0" . '¨9uûGl_Zõ#…fYã†I0SÓR´]áXŠÖ†‚¾ZÎªCöËú‚çíë.éí,—n\\‘ÑÉ@c†CÊ9ÖŸè‘Të¯øêFJIÁS[Ïmu$©I¡vIPø2¤~‘¯a9R5¨
ğw5ˆ-uÃš¢\'ú¿ñv×Ç\\±¨fà>­wò€LewjğqÖ•´F‹kHcíE´ò{ƒˆÚ¤ˆŞIdø"DÅ«û5‡pıŒ×
›#£åºHããCÃ˜ó×šìwª××È-ç¸n4&ŸJ?u2l«\'l[1²‹x#Ò' . "\0" . 'òÕU™dA<6*ôÔüµ²F2nĞUˆ#€<4˜Ò[Û€t&&‡&ÛÕËûS!»³\'q|ÕsFª©ÍŒ’,aGÄ—ÎïH.«¨†?+ mpÈ²K5¡S²Ğ>Æ·ÑZÍgÈœˆÄ@,äâkOh¬ƒ‹Imó¨LªÜOçÄ<ë¬ÜHá¤È,F1}Ïd²oÀ‹1tÇrJÒìèŠ§›?
«÷œ©a„½½ŠFtu;ƒ£…`AùğÕüu{˜4UùËOpc÷"Ó³ís¸|¹¼Šı`€I7ü€ş’\'§o,¼¸é.Şœ\\ë©.•ğ,);Cµa»Ç¦FUAÜ]’VÊ¬6Ğ' . "\0" . 'òĞ±Õt.µKmr;Uìû^û)ÚäÚ\\ØBg›ôO#|Š„QÃ„¨M”¥uK[Ô©]RbÈä1—}·üáUåËÒ7*
‹äkÃJ8Ù¯K¾IFÅe•Åxú¿W=9#B±÷§°r½ÁÛMsi¯n,e[Éqá# ±HA$ª©AZ³-@ã´…E¤Ç5%¯µ}İasˆÜÈÆò*}Éi‡¨ntSÒ¤ŠŠ’9ò®ã­¼{k>*#ëî\\V½Ël‘FÂN{hjˆñ×4³«„œcİR¬ıÑ˜>™o®]~M3¯{ù^‡‹‘û˜¾R¤e•u"ºã@‰±€Ôo{7Ï XÆ«¥¶”2ŠëªÃ=¼ÎÁ‹î³½KiaŒÿ' . "\0" . '™Š7ëU:äÏFèoÛ5ÏR×^éå(¥Å8R”T×ÖHŞ!÷ë1ñÊÃˆ%áü$Té=ì¦hà­ioª´ øh¡•ÉõFÓÏZò2ƒÃ"' . "\0" . '•j~ZNÃUĞt±j£¨òÓ‘5°L“ÜHŠÕ®|š•+øi+K¬!—pZ[İYInè²«' . "\0" . 'B}HC)ù†PF£&¨ªÒQÉ¹áî®Ëî¼µ‹ÜË]Iq"»6×ë9H§Áš¿§]krU3›å¶+:½CÎĞ÷µo,d¶ÈÅxo­êå Š9UãİEKÅ±‡#QCÏ‡-c“¶uÙ£¯u[ô,ÎÆÊe2qµíí¼•rv' . "\0" . '*¨„úV¢€Ñy8suĞÛ.Ş¯mä¾÷¸³JØÉDrç“—uÜÆû
Ğ)çÏ™âGìÖêšeqÜ¹Ø±¾îöüJ_ã¯àGşt®?ıt:‡1gáÙj!/Pê; ¬OÔâøÒLIYd¤ÈÀ‡éFe?8j£š;W¸—Û¯qs’ó†äÿ' . "\0" . ',‘Ï”ƒ©³NE¯™ÖÙéÎ«"û‘†Ğø2÷ÂwYk1,-TCµö5ò×*³6áÌr¿ªPŠAı|kÇU$´s_º}™ü‡ÜÓ’ÇOü»¥ĞhÔ4PÜLÎ†Ÿ—Ö`_¤?–·ù¦Ôµõúø—o´ê]wçpá²WüŒ,·v2´RÀÓÔŒÒ›¿ƒåáË[W¶­’k©O¼~' . "\0" . 'òI4¯,‡t’1wo6cS®ä ânG¸çÚãY]' . "\0" . 'CÕÿ' . "\0" . '®8Ô­@QZp¦•„E÷î[àC íOº¬1ä0—·—/fÜx×7iP³Ê óØWôj^s·‰~û„½•k4»‚õçX©âSÇ—uç÷?“ôşC¶qDËªÇ‘F¨•¨ÔU;óİ–½©KëÆ"7•!iêgzĞ
sútCntI©cş×ºk¬dw—BÓ~bÆjÒÜG¡ÕM*y,\'W;ÜÖ8ËšIL,AØ’…ˆ¨»€‘á¡ßÀšÒ^ _²}óÿ' . "\0" . 'jíy#m¼†yS ƒøäv‘O4 —ÃW—Çx%]^²XwÖÛÔ2µ<©©²
Øæêµä³¼´ÎÅVŠF6×' . "\0" . '*Æ¯ùsèìí½~æåe+Òäì­»Êk×Xír)ö¥Ø€«!`ñÔUe¦¶î¨İ4èeÙİ+ëÔëNàÃãì„jê©Ô/ÈkÎ­¡±¶äì>ø±Î{¥İvöÔ¥­¤ŒÜƒÍjíOLÈ¿éÖ¶Ç­ŸWõı˜».N«¢-®£ôÁà?n”ŠÎÿ' . "\0" . 'ÔÌ×øìÇmçì™¡¸µ,ƒÁ¨®¿¥w®Õ+;UõƒáºÅ—‰uö­Ü“öî&îäšk+i$Qàï
³~³®U¡Ğœ’Ò^CÀ<xvŸ U93ú•·X½Ği’ƒî¬meÜ¾%¢­G#ùzô;Gì~§r¢ßb{Øq¢³–ï˜¸ã;$Øùd?QkÇSãÀ¬;¼Pù#£µËËG¹Ğ±çlöWp#À×\\jçKÆÊ_úËØN˜ 5¿K‰ÉVâ:/W.NÃ@tvú·¦q÷Š*½Jg¼±ï$™5º‰Azå„€Ó„ïÜ
z7xÓ]¦M]>¼ÎLë´VF› &º¿ñµÍ€¹˜ŠÓÃYÀˆ|¼¥Å5Ó‰@!…¯ÕMk`’J
"ñÖ6Ô’¸¥|<tĞÎ»ö{¸ÿ' . "\0" . 'nû~6àÍf“°>s“)¯ÿ' . "\0" . '}y™ŞŞ§§‰EPwÂ‡HåÄ¡2ø”—õ#—êe{.Æ$Y%{éeX¤ŒµbŠ6uñÚÏı†·Ã¯\'áS+{]|ì\\¸‹{{zA	¨PÈÇÔì´õ·™\'ûS\\ÔzÛq¶q,òXÛ›ø’æÊåWòq¬9|ü©ãÇIÛ¨ÕNhöŸ?mØçeûzîè®.òCb²?2Ç\'üY¿wĞÅkË»³§“²ßêNL/†GVu=»ÜOl»X§
ãø×–¸Óm$ÀOvûr\\¿eeìØu¤04¶üñ,?š”§ù’Ÿ-·§àUÒµZ8Ì5Ey+¯hñÉ¬ozw669#´¿m’ña*¬Ô mª™Cí4òÖVÁGº6¯qu³	½”îëL¸1ßäîq^Á=¼ÓÈÆ†IvºùºsÖ}Õ¦‹bûk.zõ:v~üÆ%¿QgVR8`uåòg©\\hçß|}ÀµÏtpöÿ' . "\0" . '˜°È&w<iµY@:ë·³ÄÓäÎN÷%c‚$½¼÷Âõl-°y$/qkŠÚáOû‰
ªÃø‚Šjsö±î®Ì;nå=-º³şğ	nDgz‚"Uôà¼»XS·vgNLõª’ƒînæËw&fL¦RA%ÃªÆ€})}(¿¯[5JÂ<Œ¹Ü±—%¨4<Á#‘á¦fY{»™³Ä%›£ËwìäÈ(iÉJ“P>:å·gWièvW¼²P\\å/²7Ïy};Os!«Hä’<h<‡Ã]JŠªÇ-îìå„³+d:˜&«5ê˜àÀ-~­£q' . "\0" . 'ÀSã®>â®¾õĞˆ`öKu½–ÎåJK2°"œµ×êêPÉÆÂÁiÛ¶W\\GuÊ…å¬gh\'âO¬>Wkµÿ' . "\0" . '•§Üp;ûXê{ÿ' . "\0" . '»î6§u5—\'óG†Gu>:´I{¶®zŞƒÁ·¨vëFÑ^˜§³9*TªExâM>hgoáÁq6ii&ûqm‚@!„ È¯x§°¼‡&…I¡â¼º9óŞ–È?º½¤·Hb·l rA›ÁÔ4Zòôë³¶üwñ×ø93şJıu:&Ñbûz$Ôñ5®¹k±ÓmÆYİ	A¡¦áÎ¾cã©e£Œ=Æêÿ' . "\0" . 'İ³]Ju>à†ù…¼<õìv¿zWsù©Ùı”ÙFìü/ó%uÈı•·ß	İÖ(}ô¯Üuæ=Üm,î^~S?AjÜKT5|àk¬îmCƒNİÍ²›w5>U4×ºx¬Ôhçş-kÚy,å:1ü¡r˜âXÛî™àe;¸‚caUİæ>G\\™«Gmâß©ÙåãíZË.J\\Ìòä!ŠŞáÂ°†Ü©…#*:kÖmŸ¼Mk¸Öºß*69²Lë¹Ûª´çÃm9ü)Mj@´ß{¸}×W}=mÕ§Ãv¥GA¹ê +¿ñÓä}?†¤óST°ı\\4' . "\0" . 'ê7Qz ™8>|?_-CˆÔÎãûIñ®D}¦^4i‹;ÉQÃéàÀk‡·•wÃZ	’Í06
³[ÒDíå[Ü¾°eG' . "\0" . 'ò<u”k¾œõ+şj¿ı"›}O«üİ_ğÖßıÄÿÙ',
      ),
    ),
  ),
);
return $content;
}
