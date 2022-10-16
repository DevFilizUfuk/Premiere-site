function bonjour() {
    var str=window.prompt(" Entrez votre prénom ");
    afficher_dans_element("et bienvenue " + str,'ajoute_ici')
  }
  function afficher_dans_element(contenu,id_contenant){
      document.getElementById(id_contenant).innerHTML = contenu;
  }
 