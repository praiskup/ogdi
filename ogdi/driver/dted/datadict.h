static char datadict[] = {'\n'
,'i','t','c','l','_','c','l','a','s','s',' ','W','K','B','_','D','a','t','a','D','i','c','t','i','o','n','a','r','y',' ','{'
,'\n'
,'\t','i','n','h','e','r','i','t',' ','d','d'
,'\n'

,'\n'
,'c','o','n','s','t','r','u','c','t','o','r',' ','{','w','p','a','t','h',' ','l','o','c','a','t','i','o','n','}',' ','{'
,'\n'
,' ',' ',' ',' ','#','d','d',':',':','c','o','n','s','t','r','u','c','t','o','r',' ','$','w','i','n','d','o','w','p','a','t','h',' ','$','l','o','c','a','t','i','o','n'
,'\n'
,' ',' ',' ',' ','d','d',' ','$','w','p','a','t','h',' ','$','l','o','c','a','t','i','o','n'
,'\n'
,'}'
,'\n'

,'\n'
,'m','e','t','h','o','d',' ','l','a','y','o','u','t',' ','{','}',' ','{'
,'\n'
,' ',' ',' ',' ','f','r','a','m','e',' ','$','w','i','n','d','o','w','.','c','e','n','t','e','r'
,'\n'
,'\t','m','a','p','L','i','s','t','b','o','x'
,'\n'
,'\t','b','u','t','t','o','n','s'
,'\n'
,'\t','u','p','d','a','t','e','d','i','c','t'
,'\n'
,'\t',':',':','u','p','d','a','t','e',' ','i','d','l','e','t','a','s','k','s','\t'
,'\n'
,'}'
,'\n'

,'\n'
,'m','e','t','h','o','d',' ','b','u','t','t','o','n','s',' ','{','}',' ','{'
,'\n'
,'\t','f','r','a','m','e',' ','$','w','i','n','d','o','w','.','b','u','t','t','o','n','s','1'
,'\n'
,'\t','p','a','c','k',' ','$','w','i','n','d','o','w','.','b','u','t','t','o','n','s','1',' ','-','s','i','d','e',' ','t','o','p',' ','-','f','i','l','l',' ','x',' ','-','p','a','d','y',' ','2',' ','-','e','x','p','a','n','d',' ','f','a','l','s','e'
,'\n'

,'\n'
,'\t','s','e','t',' ','w','(','b','u','t','t','o','n',')',' ','[','b','u','t','t','o','n',' ','$','w','i','n','d','o','w','.','b','u','t','t','o','n','s','1','.','r','a','m','d','i','s','k',' ','\\'
,'\n'
,'\t','\t','-','t','e','x','t',' ','\"','R','a','m','/','D','i','s','k','\"',' ','\\'
,'\n'
,'\t','\t','-','c','o','m','m','a','n','d',' ','\"','$','t','h','i','s',' ','_','t','o','g','g','l','e','S','t','a','t','e','\"',']'
,'\n'
,'\t','p','a','c','k',' ','$','w','(','b','u','t','t','o','n',')',' ','-','s','i','d','e',' ','l','e','f','t',' ','-','p','a','d','x',' ','1',' ','-','e','x','p','a','n','d',' ','1'
,'\n'
,'\t','$','o','b','j','_','l','i','b','r','a','r','i','a','n',' ','R','e','g','i','s','t','e','r','S','t','a','t','u','s','I','n','f','o',' ','$','w','(','b','u','t','t','o','n',')',' ','[','$','o','b','j','_','E','n','v','i','r','o','n','m','e','n','t',' ','G','e','t','S','t','r','i','n','g',' ','S','T','A','T','U','S','-','D','T','E','D','-','R','A','M',']'
,'\n'
,'}'
,'\n'

,'\n'
,'m','e','t','h','o','d',' ','_','t','o','g','g','l','e','S','t','a','t','e',' ','{','}',' ','{'
,'\n'

,'\n'
,'\t','s','e','t',' ','s','_','s','e','l','e','c','t','i','o','n',' ','[','$','m','a','p','L','i','s','t',' ','s','u','b','w','i','d','g','e','t',' ','l','i','s','t','b','o','x',' ','c','u','r','s','e','l','e','c','t','i','o','n',']'
,'\n'
,'\t','i','f',' ','{','[','s','t','r','i','n','g',' ','c','o','m','p','a','r','e',' ','$','s','_','s','e','l','e','c','t','i','o','n',' ','\"','\"',']',' ','=','=',' ','0','}',' ','{'
,'\n'
,'\t','\t','$','o','b','j','_','E','n','v','i','r','o','n','m','e','n','t',' ','e','r','r','o','r','M','s','g',' ','\"','T','h','e','r','e',' ','m','u','s','t',' ','b','e',' ','a',' ','c','o','v','e','r','a','g','e',' ','s','e','l','e','c','t','e','d','\"'
,'\n'
,'\t','\t','r','e','t','u','r','n'
,'\n'
,'\t','}'
,'\n'
,'\t','s','e','t',' ','s','_','n','a','m','e',' ','[','g','e','t','L','i','s','t','E','n','t','r','y',' ','$','s','_','s','e','l','e','c','t','i','o','n',']'
,'\n'
,'\t','i','f',' ','{','[','s','t','r','i','n','g',' ','c','o','m','p','a','r','e',' ','$','a','_','r','a','m','d','i','s','k','(','$','s','_','n','a','m','e',')',' ','R','A','M',']',' ','=','=',' ','0','}',' ','{'
,'\n'
,'\t','\t','s','e','t',' ','a','_','r','a','m','d','i','s','k','(','$','s','_','n','a','m','e',')',' ','D','I','S','K'
,'\n'
,'\t','}',' ','e','l','s','e',' ','{'
,'\n'
,'\t','\t','s','e','t',' ','a','_','r','a','m','d','i','s','k','(','$','s','_','n','a','m','e',')',' ','R','A','M'
,'\n'
,'\t','}'
,'\n'
,'\t','$','m','a','p','L','i','s','t',' ','s','u','b','w','i','d','g','e','t',' ','l','i','s','t','b','o','x',' ','d','e','l','e','t','e',' ','$','s','_','s','e','l','e','c','t','i','o','n'
,'\n'
,'\t','$','m','a','p','L','i','s','t',' ','s','u','b','w','i','d','g','e','t',' ','l','i','s','t','b','o','x',' ','i','n','s','e','r','t',' ','$','s','_','s','e','l','e','c','t','i','o','n',' ','[','g','e','t','U','R','L','E','n','t','r','y',' ','$','s','_','n','a','m','e',']'
,'\n'
,'\t','$','m','a','p','L','i','s','t',' ','s','u','b','w','i','d','g','e','t',' ','l','i','s','t','b','o','x',' ','s','e','l','e','c','t','i','o','n',' ','s','e','t',' ','$','s','_','s','e','l','e','c','t','i','o','n',' ','$','s','_','s','e','l','e','c','t','i','o','n'
,'\n'

,'\n'
,'}'
,'\n'

,'\n'
,'m','e','t','h','o','d',' ','g','e','t','L','i','s','t','E','n','t','r','y',' ','{','i','n','d','e','x','}',' ','{'
,'\n'
,'\t','r','e','g','s','u','b',' ','{','\\','(','[','A','-','Z',']','+','\\',')','$','}',' ','[','$','m','a','p','L','i','s','t',' ','s','u','b','w','i','d','g','e','t',' ','l','i','s','t','b','o','x',' ','g','e','t',' ','$','i','n','d','e','x',']',' ','{','}',' ','s','_','n','a','m','e',' '
,'\n'
,'\t','r','e','t','u','r','n',' ','$','s','_','n','a','m','e'
,'\n'
,'}'
,'\n'

,'\n'
,'m','e','t','h','o','d',' ','u','p','d','a','t','e','d','i','c','t',' ','{','}',' ','{'
,'\n'

,'\n'
,' ',' ','$','m','a','p','L','i','s','t',' ','s','u','b','w','i','d','g','e','t',' ','l','i','s','t','b','o','x',' ','d','e','l','e','t','e',' ','0',' ','[','$','m','a','p','L','i','s','t',' ','s','u','b','w','i','d','g','e','t',' ','l','i','s','t','b','o','x',' ','s','i','z','e',']'
,'\n'
,' ',' ','f','o','r','e','a','c','h',' ','s','_','i','t','e','m',' ','[','e','c','s','_','U','p','d','a','t','e','D','i','c','t','i','o','n','a','r','y',' ','$','u','r','l',']',' ','{'
,'\n'
,' ',' ','\t','i','f',' ','{','[','i','n','f','o',' ','e','x','i','s','t','s',' ','a','_','r','a','m','d','i','s','k','(','$','s','_','i','t','e','m',')',']',' ','=','=',' ','0','}',' ','{'
,'\n'
,'\t','\t','s','e','t',' ','a','_','r','a','m','d','i','s','k','(','$','s','_','i','t','e','m',')',' ','$','s','_','d','i','s','k','D','e','f','a','u','l','t'
,'\n'
,'\t','}'
,'\n'
,' ',' ',' ',' ','$','m','a','p','L','i','s','t',' ','s','u','b','w','i','d','g','e','t',' ','l','i','s','t','b','o','x',' ','i','n','s','e','r','t',' ','e','n','d',' ','[','g','e','t','U','R','L','E','n','t','r','y',' ','$','s','_','i','t','e','m',']'
,'\n'
,' ',' ','}'
,'\n'

,'\n'
,'}'
,'\n'

,'\n'
,'m','e','t','h','o','d',' ','g','e','t','U','R','L','E','n','t','r','y',' ','{','s','_','p','a','t','h','}',' ','{'
,'\n'
,'\t','r','e','t','u','r','n',' ','$','{','s','_','p','a','t','h','}','\\','(','$','a','_','r','a','m','d','i','s','k','(','$','s','_','p','a','t','h',')','\\',')'
,'\n'
,'}'
,'\n'

,'\n'
,'m','e','t','h','o','d',' ','g','e','t','S','e','l','e','c','t','e','d','C','l','a','s','s',' ','{','a','r','g','s','}',' ','{'
,'\n'
,' ','\t','r','e','t','u','r','n',' ','R','a','s','t','e','r'
,'\n'
,'}'
,'\n'

,'\n'
,'m','e','t','h','o','d',' ','g','e','t','P','a','t','h','n','a','m','e',' ','{','c','o','v','e','r','a','g','e',' ','c','l','a','s','s',' ','s','e','l','e','c','t','i','o','n','}',' ','{'
,'\n'
,'\t','r','e','t','u','r','n',' ','$','s','e','l','e','c','t','i','o','n','\t'
,'\n'
,'}'
,'\n'

,'\n'
,'p','r','o','t','e','c','t','e','d',' ','a','_','r','a','m','d','i','s','k',' ',';','#',' ','w','h','e','t','h','e','r',' ','t','h','e',' ','c','o','v','e','r','a','g','e',' ','i','s',' ','t','o',' ','b','e',' ','l','o','a','d','e','d',' ','i','n','t','o',' ','r','a','m',' ','o','r',' ','d','i','s','k','.'
,'\n'
,'\t','\t','\t','\t','\t',';','#',' ','v','a','l','u','e','s',' ','a','r','e',' ','e','i','t','h','e','r',' ','\"','R','A','M','\"',' ','o','r',' ','\"','D','I','S','K','\"'
,'\n'
,'p','r','o','t','e','c','t','e','d',' ','s','_','d','i','s','k','D','e','f','a','u','l','t',' ','\"','D','I','S','K','\"'
,'\n'

,'\n'
,'}'
,'\n'

,'\n'
,'\0'};