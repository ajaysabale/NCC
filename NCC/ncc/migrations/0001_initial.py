# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.db import migrations, models
from django.conf import settings


class Migration(migrations.Migration):

    dependencies = [
        migrations.swappable_dependency(settings.AUTH_USER_MODEL),
    ]

    operations = [
        migrations.CreateModel(
            name='Players',
            fields=[
                ('id', models.AutoField(verbose_name='ID', serialize=False, auto_created=True, primary_key=True)),
                ('p1_name', models.CharField(max_length=200)),
                ('p2_name', models.CharField(max_length=200, null=True, blank=True)),
                ('p1_email', models.EmailField(max_length=200)),
                ('p2_email', models.EmailField(max_length=200, null=True, blank=True)),
                ('p1_phone', models.CharField(max_length=10)),
                ('p2_phone', models.CharField(max_length=10, null=True, blank=True)),
                ('total_score', models.IntegerField(default=0)),
                ('total_time', models.IntegerField(default=0)),
                ('user', models.OneToOneField(to=settings.AUTH_USER_MODEL)),
            ],
        ),
        migrations.CreateModel(
            name='Qattempt',
            fields=[
                ('id', models.AutoField(verbose_name='ID', serialize=False, auto_created=True, primary_key=True)),
                ('score', models.IntegerField(default=0)),
                ('time', models.IntegerField(default=0)),
            ],
        ),
        migrations.CreateModel(
            name='Question',
            fields=[
                ('id', models.AutoField(verbose_name='ID', serialize=False, auto_created=True, primary_key=True)),
                ('question_title', models.CharField(max_length=100)),
                ('question_text', models.TextField(max_length=1000)),
            ],
        ),
        migrations.AddField(
            model_name='qattempt',
            name='question',
            field=models.ForeignKey(to='ncc.Question'),
        ),
        migrations.AddField(
            model_name='qattempt',
            name='user',
            field=models.ForeignKey(to=settings.AUTH_USER_MODEL),
        ),
    ]
