#include "fish_detector/common/species_dialog.h"
#include "ui_species_dialog.h"

namespace fish_detector {

SpeciesDialog::SpeciesDialog(QWidget *parent)
  : QDialog(parent) 
  , ui_(new Ui::SpeciesDialog) {
  ui_->setupUi(this);
}

void SpeciesDialog::on_ok_clicked() {
  accept();
}

void SpeciesDialog::on_cancel_clicked() {
  reject();
}

void SpeciesDialog::on_removeSubspecies_clicked() {
  QListWidgetItem *current = ui_->subspeciesList->currentItem();
  if(current != nullptr) {
    delete current;
  }
}

void SpeciesDialog::on_addSubspecies_clicked() {
  QListWidgetItem *item = new QListWidgetItem("New subspecies");
  item->setFlags(item->flags() | Qt::ItemIsEditable);
  ui_->subspeciesList->addItem(item);
  ui_->subspeciesList->editItem(item);
}

Species SpeciesDialog::getSpecies() {
  Species species;
  return species;
}

#include "../../include/fish_detector/common/moc_species_dialog.cpp"

} // namespace fish_detector
