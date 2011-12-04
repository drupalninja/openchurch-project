$(function(){
  var presets = new Array();

  //Blue Gray White
  presets['blue-gray-white'] = new Array();
  presets['blue-gray-white']['body'] = 'blue';
  presets['blue-gray-white']['page'] = 'white';
  presets['blue-gray-white']['accent'] = 'blue';
  presets['blue-gray-white']['header'] = 'black';
  presets['blue-gray-white']['link'] = 'blue';

  //Blue Green White
  presets['blue-green-white'] = new Array();
  presets['blue-green-white']['body'] = 'blue';
  presets['blue-green-white']['page'] = 'white';
  presets['blue-green-white']['accent'] = 'green';
  presets['blue-green-white']['header'] = 'blue';
  presets['blue-green-white']['link'] = 'green';

  //Green Black
  presets['green-black'] = new Array();
  presets['green-black']['body'] = 'black';
  presets['green-black']['page'] = 'white';
  presets['green-black']['accent'] = 'green';
  presets['green-black']['header'] = 'green';
  presets['green-black']['link'] = 'green';

  //Blue White
  presets['blue-white'] = new Array();
  presets['blue-white']['body'] = 'white';
  presets['blue-white']['page'] = 'white';
  presets['blue-white']['accent'] = 'blue';
  presets['blue-white']['header'] = 'blue';
  presets['blue-white']['link'] = 'blue';

  //Gray Black
  presets['gray-black'] = new Array();
  presets['gray-black']['body'] = 'black';
  presets['gray-black']['page'] = 'white';
  presets['gray-black']['accent'] = 'black';
  presets['gray-black']['header'] = 'white';
  presets['gray-black']['link'] = 'gray';

  //Green White
  presets['green-white'] = new Array();
  presets['green-white']['body'] = 'white';
  presets['green-white']['page'] = 'no-page-bg';
  presets['green-white']['accent'] = 'green';
  presets['green-white']['header'] = 'green';
  presets['green-white']['link'] = 'green';

  //Orange Black
  presets['orange-black'] = new Array();
  presets['orange-black']['body'] = 'black';
  presets['orange-black']['page'] = 'white';
  presets['orange-black']['accent'] = 'orange';
  presets['orange-black']['header'] = 'white';
  presets['orange-black']['link'] = 'orange';

  //Red White
  presets['red-white'] = new Array();
  presets['red-white']['body'] = 'white';
  presets['red-white']['page'] = 'no-page-bg';
  presets['red-white']['accent'] = 'red';
  presets['red-white']['header'] = 'black';
  presets['red-white']['link'] = 'red';

  $('input[name=openchurch_mm_color_preset]').click(function(){
    var selected_preset;

    if ($(this).val() != '') {//don't change if custom
      selected_preset = presets[$(this).val()];

      $('#edit-mix-and-match-body-bg option').removeAttr('selected').filter('[value='+selected_preset['body']+']').attr('selected','selected');
      $('#edit-mix-and-match-page-bg option').removeAttr('selected').filter('[value^='+selected_preset['page']+']').attr('selected','selected');
      $('#edit-mix-and-match-accent-color option').removeAttr('selected').filter('[value^='+selected_preset['accent']+']').attr('selected','selected');
      $('#edit-mix-and-match-header-color option').removeAttr('selected').filter('[value^='+selected_preset['header']+']').attr('selected','selected');
      $('#edit-mix-and-match-link-color option').removeAttr('selected').filter('[value^='+selected_preset['link']+']').attr('selected','selected');
      $('#edit-mix-and-match-corners option').removeAttr('selected').filter('[value^=round-corners-3]').attr('selected','selected');
    }
  });

  $('#system-theme-settings select').change(function(){
    $('input[name=openchurch_mm_color_preset]').removeAttr('checked').filter('[value=""]').attr('checked','checked');
  });
});